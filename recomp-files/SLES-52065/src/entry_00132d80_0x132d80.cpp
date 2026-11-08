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

// Function: entry_00132d80
// Address: 0x132d80 - 0x132dd8
void entry_00132d80_0x132d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132d80_0x132d80");
#endif

    switch (ctx->pc) {
        case 0x132d90u: goto label_132d90;
        default: break;
    }

    ctx->pc = 0x132d80u;

    // 0x132d80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x132d84: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x132d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x132d88: 0xc061bcc  jal         func_186F30
    ctx->pc = 0x132D88u;
    SET_GPR_U32(ctx, 31, 0x132D90u);
    ctx->pc = 0x132D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D88u;
    // 0x132d8c: 0x248462b0  addiu       $a0, $a0, 0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F30u, 0x132D88u, 0x132D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D90u;
label_132d90:
    // 0x132d90: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x132d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x132d94: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x132d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x132d98: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x132d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x132d9c: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x132d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x132da0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x132da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x132da4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x132da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x132da8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x132dac: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x132dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x132db0: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x132db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x132db4: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x132db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x132db8: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x132db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x132dbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x132dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x132dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x132dc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x132dc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x132dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x132dcc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x132DCCu;
    {
        const bool branch_taken_0x132dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DCCu;
        // 0x132dd0: 0xafa60130  sw          $a2, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dcc) {
            ctx->pc = 0x132E80u;
            return;
        }
    }
    ctx->pc = 0x132DD4u;
    // 0x132dd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132dd8u;
}
