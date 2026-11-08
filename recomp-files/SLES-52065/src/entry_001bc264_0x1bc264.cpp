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

// Function: entry_001bc264
// Address: 0x1bc264 - 0x1bc294
void entry_001bc264_0x1bc264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc264_0x1bc264");
#endif

    switch (ctx->pc) {
        case 0x1bc274u: goto label_1bc274;
        case 0x1bc288u: goto label_1bc288;
        default: break;
    }

    ctx->pc = 0x1bc264u;

    // 0x1bc264: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC264u;
    {
        const bool branch_taken_0x1bc264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC264u;
        // 0x1bc268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc264) {
            ctx->pc = 0x1BC294u;
            return;
        }
    }
    ctx->pc = 0x1BC26Cu;
    // 0x1bc26c: 0xc048de8  jal         func_1237A0
    ctx->pc = 0x1BC26Cu;
    SET_GPR_U32(ctx, 31, 0x1BC274u);
    ctx->pc = 0x1BC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC26Cu;
    // 0x1bc270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237A0u, 0x1BC26Cu, 0x1BC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC274u;
label_1bc274:
    // 0x1bc274: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bc278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bc27c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc280: 0xc048da8  jal         func_1236A0
    ctx->pc = 0x1BC280u;
    SET_GPR_U32(ctx, 31, 0x1BC288u);
    ctx->pc = 0x1BC284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC280u;
    // 0x1bc284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236A0u, 0x1BC280u, 0x1BC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC288u;
label_1bc288:
    // 0x1bc288: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bc288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bc28c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bc28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bc290: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1bc290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1bc294u;
}
