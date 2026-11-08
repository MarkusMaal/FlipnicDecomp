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

// Function: entry_002045d0
// Address: 0x2045d0 - 0x20461c
void entry_002045d0_0x2045d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002045d0_0x2045d0");
#endif

    switch (ctx->pc) {
        case 0x20460cu: goto label_20460c;
        default: break;
    }

    ctx->pc = 0x2045d0u;

    // 0x2045d0: 0x26c25190  addiu       $v0, $s6, 0x5190
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
    // 0x2045d4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2045d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2045d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2045d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2045dc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2045e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2045e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2045e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2045ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2045f0: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2045f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2045f4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2045f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2045f8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2045F8u;
    {
        const bool branch_taken_0x2045f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2045F8u;
        // 0x2045fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2045f8) {
            ctx->pc = 0x20461Cu;
            return;
        }
    }
    ctx->pc = 0x204600u;
    // 0x204600: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x204604: 0xc080e4c  jal         func_203930
    ctx->pc = 0x204604u;
    SET_GPR_U32(ctx, 31, 0x20460Cu);
    ctx->pc = 0x204608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204604u;
    // 0x204608: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x204604u, 0x20460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20460Cu;
label_20460c:
    // 0x20460c: 0x1440025a  bnez        $v0, . + 4 + (0x25A << 2)
    ctx->pc = 0x20460Cu;
    {
        const bool branch_taken_0x20460c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20460Cu;
        // 0x204610: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20460c) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x204614u;
    // 0x204614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204614u;
    {
        const bool branch_taken_0x204614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204614u;
        // 0x204618: 0x27b20028  addiu       $s2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204614) {
            ctx->pc = 0x204620u;
            return;
        }
    }
    ctx->pc = 0x20461Cu;
}
