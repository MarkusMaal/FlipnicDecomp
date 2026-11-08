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

// Function: entry_00157de0
// Address: 0x157de0 - 0x157e7c
void entry_00157de0_0x157de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157de0_0x157de0");
#endif

    ctx->pc = 0x157de0u;

    // 0x157de0: 0x29030005  slti        $v1, $t0, 0x5
    ctx->pc = 0x157de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x157de4: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x157DE4u;
    {
        const bool branch_taken_0x157de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DE4u;
        // 0x157de8: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157de4) {
            ctx->pc = 0x157DD4u;
            return;
        }
    }
    ctx->pc = 0x157DECu;
    // 0x157dec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157df0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x157df4: 0xae050200  sw          $a1, 0x200($s0)
    ctx->pc = 0x157df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 5));
    // 0x157df8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x157dfc: 0xae050204  sw          $a1, 0x204($s0)
    ctx->pc = 0x157dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 5));
    // 0x157e00: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x157e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x157e04: 0xae0502e0  sw          $a1, 0x2E0($s0)
    ctx->pc = 0x157e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 5));
    // 0x157e08: 0xae0502d8  sw          $a1, 0x2D8($s0)
    ctx->pc = 0x157e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 5));
    // 0x157e0c: 0xae0502dc  sw          $a1, 0x2DC($s0)
    ctx->pc = 0x157e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 5));
    // 0x157e10: 0xae0401e0  sw          $a0, 0x1E0($s0)
    ctx->pc = 0x157e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 4));
    // 0x157e14: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x157e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x157e18: 0xa60001f8  sh          $zero, 0x1F8($s0)
    ctx->pc = 0x157e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 504), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e1c: 0xa20001f4  sb          $zero, 0x1F4($s0)
    ctx->pc = 0x157e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 500), (uint8_t)GPR_U32(ctx, 0));
    // 0x157e20: 0xa20001f3  sb          $zero, 0x1F3($s0)
    ctx->pc = 0x157e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 499), (uint8_t)GPR_U32(ctx, 0));
    // 0x157e24: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x157e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x157e28: 0xae040314  sw          $a0, 0x314($s0)
    ctx->pc = 0x157e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 4));
    // 0x157e2c: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x157e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x157e30: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x157e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x157e34: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x157e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x157e38: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x157e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x157e3c: 0xae040328  sw          $a0, 0x328($s0)
    ctx->pc = 0x157e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 4));
    // 0x157e40: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x157e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x157e44: 0xa60001e8  sh          $zero, 0x1E8($s0)
    ctx->pc = 0x157e44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e48: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x157e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x157e4c: 0xa60501f0  sh          $a1, 0x1F0($s0)
    ctx->pc = 0x157e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 496), (uint16_t)GPR_U32(ctx, 5));
    // 0x157e50: 0xae0302e4  sw          $v1, 0x2E4($s0)
    ctx->pc = 0x157e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
    // 0x157e54: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x157e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x157e58: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x157e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x157e5c: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x157e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x157e60: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x157e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x157e64: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x157e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x157e68: 0xaf808604  sw          $zero, -0x79FC($gp)
    ctx->pc = 0x157e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 0));
    // 0x157e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e74: 0x3e00008  jr          $ra
    ctx->pc = 0x157E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E74u;
        // 0x157e78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E7Cu;
}
