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

// Function: FUN_00158d80
// Address: 0x158d80 - 0x158e2c
void FUN_00158d80_0x158d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158d80_0x158d80");
#endif

    switch (ctx->pc) {
        case 0x158da4u: goto label_158da4;
        case 0x158dc4u: goto label_158dc4;
        default: break;
    }

    ctx->pc = 0x158d80u;

    // 0x158d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158d84: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x158d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x158d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158d8c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x158d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x158d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x158d9c: 0xc05619c  jal         func_158670
    ctx->pc = 0x158D9Cu;
    SET_GPR_U32(ctx, 31, 0x158DA4u);
    ctx->pc = 0x158DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D9Cu;
    // 0x158da0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158670u, 0x158D9Cu, 0x158DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DA4u;
label_158da4:
    // 0x158da4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dac: 0xa20201d1  sb          $v0, 0x1D1($s0)
    ctx->pc = 0x158dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x158db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158db4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x158db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x158db8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x158db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x158dbc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x158DBCu;
    SET_GPR_U32(ctx, 31, 0x158DC4u);
    ctx->pc = 0x158DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158DBCu;
    // 0x158dc0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x158DBCu, 0x158DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DC4u;
label_158dc4:
    // 0x158dc4: 0xa20001d3  sb          $zero, 0x1D3($s0)
    ctx->pc = 0x158dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x158dc8: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x158dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x158dcc: 0xa20001f9  sb          $zero, 0x1F9($s0)
    ctx->pc = 0x158dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 505), (uint8_t)GPR_U32(ctx, 0));
    // 0x158dd0: 0x3446c28f  ori         $a2, $v0, 0xC28F
    ctx->pc = 0x158dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x158dd4: 0xa60001f4  sh          $zero, 0x1F4($s0)
    ctx->pc = 0x158dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 500), (uint16_t)GPR_U32(ctx, 0));
    // 0x158dd8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x158dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x158ddc: 0xae0001f0  sw          $zero, 0x1F0($s0)
    ctx->pc = 0x158ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 0));
    // 0x158de0: 0x3445999a  ori         $a1, $v0, 0x999A
    ctx->pc = 0x158de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x158de4: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x158de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
    // 0x158de8: 0x3c023db8  lui         $v0, 0x3DB8
    ctx->pc = 0x158de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
    // 0x158dec: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x158decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x158df0: 0x344451ec  ori         $a0, $v0, 0x51EC
    ctx->pc = 0x158df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x158df4: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x158df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x158df8: 0x3c023dca  lui         $v0, 0x3DCA
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15818 << 16));
    // 0x158dfc: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x158dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x158e00: 0x3443c083  ori         $v1, $v0, 0xC083
    ctx->pc = 0x158e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49283);
    // 0x158e04: 0xae0001fc  sw          $zero, 0x1FC($s0)
    ctx->pc = 0x158e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 0));
    // 0x158e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x158e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e0c: 0xaf8680b0  sw          $a2, -0x7F50($gp)
    ctx->pc = 0x158e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 6));
    // 0x158e10: 0xaf8580b4  sw          $a1, -0x7F4C($gp)
    ctx->pc = 0x158e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 5));
    // 0x158e14: 0xaf8480b8  sw          $a0, -0x7F48($gp)
    ctx->pc = 0x158e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934712), GPR_U32(ctx, 4));
    // 0x158e18: 0xaf8380bc  sw          $v1, -0x7F44($gp)
    ctx->pc = 0x158e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934716), GPR_U32(ctx, 3));
    // 0x158e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e24: 0x3e00008  jr          $ra
    ctx->pc = 0x158E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E24u;
        // 0x158e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158E2Cu;
}
