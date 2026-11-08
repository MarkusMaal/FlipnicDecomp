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

// Function: entry_00136da0
// Address: 0x136da0 - 0x136e40
void entry_00136da0_0x136da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136da0_0x136da0");
#endif

    ctx->pc = 0x136da0u;

    // 0x136da0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x136da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x136da4: 0x2408f800  addiu       $t0, $zero, -0x800
    ctx->pc = 0x136da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x136da8: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x136da8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x136dac: 0x300607ff  andi        $a2, $zero, 0x7FF
    ctx->pc = 0x136dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x136db0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x136db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x136db4: 0x64050200  daddiu      $a1, $zero, 0x200
    ctx->pc = 0x136db4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)512);
    // 0x136db8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x136db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x136dbc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x136dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x136dc0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x136dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x136dc4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x136dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x136dc8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x136dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x136dcc: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x136dccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x136dd0: 0x8f878544  lw          $a3, -0x7ABC($gp)
    ctx->pc = 0x136dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935876)));
    // 0x136dd4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x136dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136dd8: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x136dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x136ddc: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x136ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x136de0: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x136de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x136de4: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x136de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x136de8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x136de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x136dec: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x136decu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x136df0: 0x8f878544  lw          $a3, -0x7ABC($gp)
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935876)));
    // 0x136df4: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x136df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x136df8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x136dfc: 0x24e7003f  addiu       $a3, $a3, 0x3F
    ctx->pc = 0x136dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x136e00: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x136e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x136e04: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x136e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x136e08: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x136e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x136e0c: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x136e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x136e10: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x136e10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x136e14: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x136e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x136e18: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x136e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x136e1c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x136e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x136e20: 0x94830016  lhu         $v1, 0x16($a0)
    ctx->pc = 0x136e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x136e24: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x136e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x136e28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x136e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x136e2c: 0xa4830016  sh          $v1, 0x16($a0)
    ctx->pc = 0x136e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x136e30: 0x8f838544  lw          $v1, -0x7ABC($gp)
    ctx->pc = 0x136e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935876)));
    // 0x136e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136e38: 0x3e00008  jr          $ra
    ctx->pc = 0x136E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E38u;
        // 0x136e3c: 0xaf838544  sw          $v1, -0x7ABC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E40u;
}
