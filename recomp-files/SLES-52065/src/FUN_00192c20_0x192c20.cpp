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

// Function: FUN_00192c20
// Address: 0x192c20 - 0x192cf4
void FUN_00192c20_0x192c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192c20_0x192c20");
#endif

    switch (ctx->pc) {
        case 0x192c74u: goto label_192c74;
        case 0x192c9cu: goto label_192c9c;
        default: break;
    }

    ctx->pc = 0x192c20u;

    // 0x192c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192c30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x192c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c34: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192C34u;
    {
        const bool branch_taken_0x192c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C34u;
        // 0x192c38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c34) {
            ctx->pc = 0x192C44u;
            goto label_192c44;
        }
    }
    ctx->pc = 0x192C3Cu;
    // 0x192c3c: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x192C3Cu;
    {
        const bool branch_taken_0x192c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c3c) {
            ctx->pc = 0x192C9Cu;
            goto label_192c9c;
        }
    }
    ctx->pc = 0x192C44u;
label_192c44:
    // 0x192c44: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x192c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x192c48: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x192c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x192c4c: 0x8f868384  lw          $a2, -0x7C7C($gp)
    ctx->pc = 0x192c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x192c50: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x192c54: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x192c58: 0x8c6528dc  lw          $a1, 0x28DC($v1)
    ctx->pc = 0x192c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10460)));
    // 0x192c5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x192c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192c60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192c64: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x192c68: 0x2253018  mult        $a2, $s1, $a1
    ctx->pc = 0x192c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x192c6c: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x192C6Cu;
    SET_GPR_U32(ctx, 31, 0x192C74u);
    ctx->pc = 0x192C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C6Cu;
    // 0x192c70: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x192C6Cu, 0x192C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C74u;
label_192c74:
    // 0x192c74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x192c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192c78: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x192c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x192c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c84: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x192c88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c90: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x192c90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x192c94: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x192C94u;
    SET_GPR_U32(ctx, 31, 0x192C9Cu);
    ctx->pc = 0x192C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C94u;
    // 0x192c98: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x192C94u, 0x192C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C9Cu;
label_192c9c:
    // 0x192c9c: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x192c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x192ca0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x192ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x192ca4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x192ca4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x192ca8: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x192cac: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x192cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x192cb0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x192cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x192cb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x192cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x192cb8: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x192cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x192cbc: 0x3012  mflo        $a2
    ctx->pc = 0x192cbcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x192cc0: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x192cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x192cc4: 0x2810  mfhi        $a1
    ctx->pc = 0x192cc4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x192cc8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x192cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192ccc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x192cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x192cd0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x192cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x192cd4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x192cd8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x192cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x192cdc: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x192cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
    // 0x192ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192cec: 0x3e00008  jr          $ra
    ctx->pc = 0x192CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CECu;
        // 0x192cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CF4u;
}
