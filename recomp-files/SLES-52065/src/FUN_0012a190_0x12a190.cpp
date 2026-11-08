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

// Function: FUN_0012a190
// Address: 0x12a190 - 0x12a1cc
void FUN_0012a190_0x12a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a190_0x12a190");
#endif

    switch (ctx->pc) {
        case 0x12a1a4u: goto label_12a1a4;
        default: break;
    }

    ctx->pc = 0x12a190u;

    // 0x12a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a19c: 0xc04a814  jal         func_12A050
    ctx->pc = 0x12A19Cu;
    SET_GPR_U32(ctx, 31, 0x12A1A4u);
    ctx->pc = 0x12A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A19Cu;
    // 0x12a1a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A050u, 0x12A19Cu, 0x12A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1A4u;
label_12a1a4:
    // 0x12a1a4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x12a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x12a1a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12a1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1ac: 0x24638b00  addiu       $v1, $v1, -0x7500
    ctx->pc = 0x12a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937344));
    // 0x12a1b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x12a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12a1b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12a1b8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12a1bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1C4u;
        // 0x12a1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A1CCu;
}
