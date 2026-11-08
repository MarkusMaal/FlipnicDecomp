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

// Function: entry_001ec360
// Address: 0x1ec360 - 0x1ec3a8
void entry_001ec360_0x1ec360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec360_0x1ec360");
#endif

    switch (ctx->pc) {
        case 0x1ec368u: goto label_1ec368;
        default: break;
    }

    ctx->pc = 0x1ec360u;

    // 0x1ec360: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EC360u;
    SET_GPR_U32(ctx, 31, 0x1EC368u);
    ctx->pc = 0x1EC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC360u;
    // 0x1ec364: 0x8ec4be50  lw          $a0, -0x41B0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EC360u, 0x1EC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC368u;
label_1ec368:
    // 0x1ec368: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec36c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1ec36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1ec370: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec374: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ec378: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ec378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1ec37c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1ec37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1ec380: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x1ec380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ec384: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ec384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec388: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1EC388u;
    {
        const bool branch_taken_0x1ec388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1EC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC388u;
        // 0x1ec38c: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec388) {
            ctx->pc = 0x1EC3C8u;
            return;
        }
    }
    ctx->pc = 0x1EC390u;
    // 0x1ec390: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC390u;
    {
        const bool branch_taken_0x1ec390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC390u;
        // 0x1ec394: 0x26a441d8  addiu       $a0, $s5, 0x41D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec390) {
            ctx->pc = 0x1EC3A8u;
            return;
        }
    }
    ctx->pc = 0x1EC398u;
    // 0x1ec398: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC398u;
    {
        const bool branch_taken_0x1ec398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC398u;
        // 0x1ec39c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec398) {
            ctx->pc = 0x1EC3B8u;
            return;
        }
    }
    ctx->pc = 0x1EC3A0u;
    // 0x1ec3a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC3A0u;
    {
        const bool branch_taken_0x1ec3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3a0) {
            ctx->pc = 0x1EC3E8u;
            return;
        }
    }
    ctx->pc = 0x1EC3A8u;
}
