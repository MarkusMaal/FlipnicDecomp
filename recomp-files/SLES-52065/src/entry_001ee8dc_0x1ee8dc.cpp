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

// Function: entry_001ee8dc
// Address: 0x1ee8dc - 0x1ee910
void entry_001ee8dc_0x1ee8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee8dc_0x1ee8dc");
#endif

    switch (ctx->pc) {
        case 0x1ee900u: goto label_1ee900;
        default: break;
    }

    ctx->pc = 0x1ee8dcu;

    // 0x1ee8dc: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1ee8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x1ee8e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee8e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ee8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8e8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1ee8e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8ec: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1ee8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ee8f0: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1ee8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1ee8f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8f8: 0xc07b704  jal         func_1EDC10
    ctx->pc = 0x1EE8F8u;
    SET_GPR_U32(ctx, 31, 0x1EE900u);
    ctx->pc = 0x1EE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8F8u;
    // 0x1ee8fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC10u, 0x1EE8F8u, 0x1EE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE900u;
label_1ee900:
    // 0x1ee900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE900u;
    {
        const bool branch_taken_0x1ee900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee900) {
            ctx->pc = 0x1EE920u;
            return;
        }
    }
    ctx->pc = 0x1EE908u;
    // 0x1ee908: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EE908u;
    SET_GPR_U32(ctx, 31, 0x1EE910u);
    ctx->pc = 0x1EE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE908u;
    // 0x1ee90c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EE908u, 0x1EE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE910u;
}
