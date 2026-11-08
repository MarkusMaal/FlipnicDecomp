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

// Function: entry_00209d74
// Address: 0x209d74 - 0x209de0
void entry_00209d74_0x209d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209d74_0x209d74");
#endif

    switch (ctx->pc) {
        case 0x209d7cu: goto label_209d7c;
        case 0x209db4u: goto label_209db4;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd8u: goto label_209dd8;
        default: break;
    }

    ctx->pc = 0x209d74u;

    // 0x209d74: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x209D74u;
    SET_GPR_U32(ctx, 31, 0x209D7Cu);
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x209D74u, 0x209D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D7Cu;
label_209d7c:
    // 0x209d7c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x209d80: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x209d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x209d84: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x209d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x209d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d8c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x209d8cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x209d90: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x209d90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x209d94: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x209d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x209d98: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x209d98u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x209d9c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x209d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x209da0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x209da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x209da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x209da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209da8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x209da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x209dac: 0xc07ae58  jal         func_1EB960
    ctx->pc = 0x209DACu;
    SET_GPR_U32(ctx, 31, 0x209DB4u);
    ctx->pc = 0x209DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DACu;
    // 0x209db0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB960u, 0x209DACu, 0x209DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DB4u;
label_209db4:
    // 0x209db4: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x209db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x209db8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x209dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209DBCu;
    {
        const bool branch_taken_0x209dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DBCu;
        // 0x209dc0: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dbc) {
            ctx->pc = 0x209DE0u;
            return;
        }
    }
    ctx->pc = 0x209DC4u;
    // 0x209dc4: 0xc07b040  jal         func_1EC100
    ctx->pc = 0x209DC4u;
    SET_GPR_U32(ctx, 31, 0x209DCCu);
    ctx->pc = 0x209DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DC4u;
    // 0x209dc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC100u, 0x209DC4u, 0x209DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DCCu;
label_209dcc:
    // 0x209dcc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x209dd0: 0xc07acc8  jal         func_1EB320
    ctx->pc = 0x209DD0u;
    SET_GPR_U32(ctx, 31, 0x209DD8u);
    ctx->pc = 0x209DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DD0u;
    // 0x209dd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB320u, 0x209DD0u, 0x209DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DD8u;
label_209dd8:
    // 0x209dd8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x209dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x209ddc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x209ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x209de0u;
}
