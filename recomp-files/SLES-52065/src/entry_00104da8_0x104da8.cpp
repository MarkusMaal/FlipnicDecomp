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

// Function: entry_00104da8
// Address: 0x104da8 - 0x104e0c
void entry_00104da8_0x104da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104da8_0x104da8");
#endif

    switch (ctx->pc) {
        case 0x104db0u: goto label_104db0;
        case 0x104dc4u: goto label_104dc4;
        case 0x104dfcu: goto label_104dfc;
        default: break;
    }

    ctx->pc = 0x104da8u;

    // 0x104da8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104DA8u;
    SET_GPR_U32(ctx, 31, 0x104DB0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104DA8u, 0x104DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DB0u;
label_104db0:
    // 0x104db0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104DB0u;
    {
        const bool branch_taken_0x104db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DB0u;
        // 0x104db4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104db0) {
            ctx->pc = 0x104E1Cu;
            return;
        }
    }
    ctx->pc = 0x104DB8u;
    // 0x104db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104dcc: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104dd0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104dd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104dd8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x104ddc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104de0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104de4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104de8: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
    // 0x104dec: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104df0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x104df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104df4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104DF4u;
    SET_GPR_U32(ctx, 31, 0x104DFCu);
    ctx->pc = 0x104DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DF4u;
    // 0x104df8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104DF4u, 0x104DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DFCu;
label_104dfc:
    // 0x104dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104DFCu;
    {
        const bool branch_taken_0x104dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104dfc) {
            ctx->pc = 0x104E0Cu;
            return;
        }
    }
    ctx->pc = 0x104E04u;
    // 0x104e04: 0xc04a89c  jal         func_12A270
    ctx->pc = 0x104E04u;
    SET_GPR_U32(ctx, 31, 0x104E0Cu);
    ctx->pc = 0x104E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E04u;
    // 0x104e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A270u, 0x104E04u, 0x104E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E0Cu;
}
