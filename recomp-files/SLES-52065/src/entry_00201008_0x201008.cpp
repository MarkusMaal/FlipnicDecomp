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

// Function: entry_00201008
// Address: 0x201008 - 0x201050
void entry_00201008_0x201008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201008_0x201008");
#endif

    switch (ctx->pc) {
        case 0x201048u: goto label_201048;
        default: break;
    }

    ctx->pc = 0x201008u;

    // 0x201008: 0x2f62023  subu        $a0, $s7, $s6
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x20100c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201010: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x201010u;
    {
        const bool branch_taken_0x201010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201010) {
            ctx->pc = 0x201050u;
            return;
        }
    }
    ctx->pc = 0x201018u;
    // 0x201018: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x201018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x20101c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x201020: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x201020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x201024: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x201028: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20102c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20102cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x201030: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x201030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201034: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201038: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20103c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x201040: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x201040u;
    SET_GPR_U32(ctx, 31, 0x201048u);
    ctx->pc = 0x201044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201040u;
    // 0x201044: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x201040u, 0x201048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201048u;
label_201048:
    // 0x201048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201048u;
    {
        const bool branch_taken_0x201048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201048u;
        // 0x20104c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201048) {
            ctx->pc = 0x20106Cu;
            return;
        }
    }
    ctx->pc = 0x201050u;
}
