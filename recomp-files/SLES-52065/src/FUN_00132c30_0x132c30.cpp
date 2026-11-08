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

// Function: FUN_00132c30
// Address: 0x132c30 - 0x132d24
void FUN_00132c30_0x132c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132c30_0x132c30");
#endif

    switch (ctx->pc) {
        case 0x132c58u: goto label_132c58;
        case 0x132c78u: goto label_132c78;
        default: break;
    }

    ctx->pc = 0x132c30u;

    // 0x132c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x132c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x132c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132c40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c44: 0x8c8400a4  lw          $a0, 0xA4($a0)
    ctx->pc = 0x132c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x132c48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132C48u;
    {
        const bool branch_taken_0x132c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C48u;
        // 0x132c4c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c48) {
            ctx->pc = 0x132C58u;
            goto label_132c58;
        }
    }
    ctx->pc = 0x132C50u;
    // 0x132c50: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x132C50u;
    SET_GPR_U32(ctx, 31, 0x132C58u);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x132C50u, 0x132C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C58u;
label_132c58:
    // 0x132c58: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x132c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x132c5c: 0x2463ee30  addiu       $v1, $v1, -0x11D0
    ctx->pc = 0x132c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962736));
    // 0x132c60: 0x12230017  beq         $s1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x132C60u;
    {
        const bool branch_taken_0x132c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x132C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C60u;
        // 0x132c64: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c60) {
            ctx->pc = 0x132CC0u;
            goto label_132cc0;
        }
    }
    ctx->pc = 0x132C68u;
    // 0x132c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x132c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c70: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x132C70u;
    SET_GPR_U32(ctx, 31, 0x132C78u);
    ctx->pc = 0x132C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C70u;
    // 0x132c74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x132C70u, 0x132C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C78u;
label_132c78:
    // 0x132c78: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x132c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x132c7c: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x132c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x132c80: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x132c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x132c84: 0xde050090  ld          $a1, 0x90($s0)
    ctx->pc = 0x132c84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x132c88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x132c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132c8c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x132c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x132c90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x132c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x132c94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x132c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x132c98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132c9c: 0x521b8  dsll        $a0, $a1, 6
    ctx->pc = 0x132c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 6);
    // 0x132ca0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x132ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x132ca4: 0x4257e  dsrl32      $a0, $a0, 21
    ctx->pc = 0x132ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 21));
    // 0x132ca8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x132ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x132cac: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x132cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x132cb0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x132cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x132cb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132cb8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x132CB8u;
    {
        const bool branch_taken_0x132cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CB8u;
        // 0x132cbc: 0xfe030090  sd          $v1, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cb8) {
            ctx->pc = 0x132D10u;
            goto label_132d10;
        }
    }
    ctx->pc = 0x132CC0u;
label_132cc0:
    // 0x132cc0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x132cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x132cc4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x132cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132cc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x132cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x132ccc: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x132cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x132cd0: 0xde070090  ld          $a3, 0x90($s0)
    ctx->pc = 0x132cd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x132cd4: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x132cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x132cd8: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x132cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x132cdc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x132cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132ce0: 0x34c3ffef  ori         $v1, $a2, 0xFFEF
    ctx->pc = 0x132ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65519);
    // 0x132ce4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x132ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x132ce8: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x132ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x132cec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132cf0: 0x721b8  dsll        $a0, $a3, 6
    ctx->pc = 0x132cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 6);
    // 0x132cf4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x132cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x132cf8: 0x4257e  dsrl32      $a0, $a0, 21
    ctx->pc = 0x132cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 21));
    // 0x132cfc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x132cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x132d00: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x132d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x132d04: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x132d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x132d08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132d0c: 0xfe030090  sd          $v1, 0x90($s0)
    ctx->pc = 0x132d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 3));
label_132d10:
    // 0x132d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x132D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D1Cu;
        // 0x132d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132D24u;
}
