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

// Function: entry_001e0110
// Address: 0x1e0110 - 0x1e0148
void entry_001e0110_0x1e0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0110_0x1e0110");
#endif

    switch (ctx->pc) {
        case 0x1e013cu: goto label_1e013c;
        default: break;
    }

    ctx->pc = 0x1e0110u;

    // 0x1e0110: 0x292201f5  slti        $v0, $t1, 0x1F5
    ctx->pc = 0x1e0110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1e0114: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E0114u;
    {
        const bool branch_taken_0x1e0114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0114) {
            ctx->pc = 0x1E0118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0114u;
            // 0x1e0118: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0148u;
            return;
        }
    }
    ctx->pc = 0x1E011Cu;
    // 0x1e011c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e0120: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0124: 0x8fc8a084  lw          $t0, -0x5F7C($fp)
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942852)));
    // 0x1e0128: 0x24a53878  addiu       $a1, $a1, 0x3878
    ctx->pc = 0x1e0128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    // 0x1e012c: 0xde260030  ld          $a2, 0x30($s1)
    ctx->pc = 0x1e012cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e0130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0134: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E0134u;
    SET_GPR_U32(ctx, 31, 0x1E013Cu);
    ctx->pc = 0x1E0138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0134u;
    // 0x1e0138: 0x8c47a080  lw          $a3, -0x5F80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E0134u, 0x1E013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E013Cu;
label_1e013c:
    // 0x1e013c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E013Cu;
    {
        const bool branch_taken_0x1e013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E013Cu;
        // 0x1e0140: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e013c) {
            ctx->pc = 0x1E0168u;
            return;
        }
    }
    ctx->pc = 0x1E0144u;
    // 0x1e0144: 0x0  nop
    ctx->pc = 0x1e0144u;
    // NOP
    ctx->pc = 0x1e0148u;
}
