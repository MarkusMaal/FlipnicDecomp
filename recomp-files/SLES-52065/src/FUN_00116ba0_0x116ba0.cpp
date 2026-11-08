#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00116ba0
// Address: 0x116ba0 - 0x116bfc
void FUN_00116ba0_0x116ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116ba0_0x116ba0");
#endif

    switch (ctx->pc) {
        case 0x116bb4u: goto label_116bb4;
        default: break;
    }

    ctx->pc = 0x116ba0u;

    // 0x116ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116bac: 0xc045994  jal         func_116650
    ctx->pc = 0x116BACu;
    SET_GPR_U32(ctx, 31, 0x116BB4u);
    ctx->pc = 0x116BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BACu;
    // 0x116bb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116650u, 0x116BACu, 0x116BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BB4u;
label_116bb4:
    // 0x116bb4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x116bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x116bb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116bbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x116bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x116bc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116bc4: 0x621019  .word       0x00621019                   # multu       $v1, $v0 # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x116bc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x116bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116bd0: 0x1812  mflo        $v1
    ctx->pc = 0x116bd0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x116bd4: 0x1010  mfhi        $v0
    ctx->pc = 0x116bd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x116bd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x116bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x116bdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116be0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x116be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x116be4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x116be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x116be8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x116be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x116bec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x116becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116bf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116bf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x116BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BF4u;
        // 0x116bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116BFCu;
}
