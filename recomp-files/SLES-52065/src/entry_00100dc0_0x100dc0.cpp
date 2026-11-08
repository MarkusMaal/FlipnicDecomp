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

// Function: entry_00100dc0
// Address: 0x100dc0 - 0x100e2c
void entry_00100dc0_0x100dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100dc0_0x100dc0");
#endif

    switch (ctx->pc) {
        case 0x100decu: goto label_100dec;
        case 0x100e1cu: goto label_100e1c;
        default: break;
    }

    ctx->pc = 0x100dc0u;

    // 0x100dc0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x100dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x100dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100dc8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x100dcc: 0x90632784  lbu         $v1, 0x2784($v1)
    ctx->pc = 0x100dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10116)));
    // 0x100dd0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x100DD0u;
    {
        const bool branch_taken_0x100dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100dd0) {
            ctx->pc = 0x100E2Cu;
            return;
        }
    }
    ctx->pc = 0x100DD8u;
    // 0x100dd8: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x100dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x100ddc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100de0: 0x24a5dfb0  addiu       $a1, $a1, -0x2050
    ctx->pc = 0x100de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959024));
    // 0x100de4: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x100DE4u;
    SET_GPR_U32(ctx, 31, 0x100DECu);
    ctx->pc = 0x100DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DE4u;
    // 0x100de8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x100DE4u, 0x100DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DECu;
label_100dec:
    // 0x100dec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x100decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100df4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100df8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x100dfc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x100dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100e00: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x100e04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100e08: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x100e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100e0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100e10: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x100e10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e14: 0xc0426bc  jal         func_109AF0
    ctx->pc = 0x100E14u;
    SET_GPR_U32(ctx, 31, 0x100E1Cu);
    ctx->pc = 0x100E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E14u;
    // 0x100e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109AF0u, 0x100E14u, 0x100E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E1Cu;
label_100e1c:
    // 0x100e1c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x100e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100e24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x100e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x100e28: 0xa0432784  sb          $v1, 0x2784($v0)
    ctx->pc = 0x100e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10116), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x100e2cu;
}
