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

// Function: FUN_00193b80
// Address: 0x193b80 - 0x193bf4
void FUN_00193b80_0x193b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193b80_0x193b80");
#endif

    switch (ctx->pc) {
        case 0x193b94u: goto label_193b94;
        case 0x193be4u: goto label_193be4;
        default: break;
    }

    ctx->pc = 0x193b80u;

    // 0x193b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193b8c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x193B8Cu;
    SET_GPR_U32(ctx, 31, 0x193B94u);
    ctx->pc = 0x193B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B8Cu;
    // 0x193b90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x193B8Cu, 0x193B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B94u;
label_193b94:
    // 0x193b94: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x193b98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x193b9c: 0x2043824  and         $a3, $s0, $a0
    ctx->pc = 0x193b9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x193ba0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x193ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x193ba4: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x193ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x193ba8: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x193bac: 0x0  nop
    ctx->pc = 0x193bacu;
    // NOP
    // 0x193bb0: 0x2010  mfhi        $a0
    ctx->pc = 0x193bb0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x193bb4: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x193bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x193bb8: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x193bbc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x193bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x193bc0: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x193bc4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193BC4u;
    {
        const bool branch_taken_0x193bc4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x193BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BC4u;
        // 0x193bc8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bc4) {
            ctx->pc = 0x193BD4u;
            goto label_193bd4;
        }
    }
    ctx->pc = 0x193BCCu;
    // 0x193bcc: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x193bd0: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
label_193bd4:
    // 0x193bd4: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x193bd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x193bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bdc: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x193BDCu;
    SET_GPR_U32(ctx, 31, 0x193BE4u);
    ctx->pc = 0x193BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BDCu;
    // 0x193be0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x193BDCu, 0x193BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BE4u;
label_193be4:
    // 0x193be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bec: 0x3e00008  jr          $ra
    ctx->pc = 0x193BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BECu;
        // 0x193bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BF4u;
}
