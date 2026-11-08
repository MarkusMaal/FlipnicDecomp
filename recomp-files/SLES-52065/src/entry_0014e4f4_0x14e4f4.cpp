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

// Function: entry_0014e4f4
// Address: 0x14e4f4 - 0x14e538
void entry_0014e4f4_0x14e4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e4f4_0x14e4f4");
#endif

    switch (ctx->pc) {
        case 0x14e508u: goto label_14e508;
        case 0x14e52cu: goto label_14e52c;
        case 0x14e534u: goto label_14e534;
        default: break;
    }

    ctx->pc = 0x14e4f4u;

    // 0x14e4f4: 0x0  nop
    ctx->pc = 0x14e4f4u;
    // NOP
    // 0x14e4f8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14e4fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14e500: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14E500u;
    SET_GPR_U32(ctx, 31, 0x14E508u);
    ctx->pc = 0x14E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E500u;
    // 0x14e504: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14E500u, 0x14E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E508u;
label_14e508:
    // 0x14e508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e50c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x14E50Cu;
    {
        const bool branch_taken_0x14e50c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E50Cu;
        // 0x14e510: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e50c) {
            ctx->pc = 0x14E538u;
            return;
        }
    }
    ctx->pc = 0x14E514u;
    // 0x14e514: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14e518: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e51c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14e520: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e524: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E524u;
    SET_GPR_U32(ctx, 31, 0x14E52Cu);
    ctx->pc = 0x14E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E524u;
    // 0x14e528: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E524u, 0x14E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E52Cu;
label_14e52c:
    // 0x14e52c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E52Cu;
    SET_GPR_U32(ctx, 31, 0x14E534u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E52Cu, 0x14E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->pc = 0x14e538u;
}
