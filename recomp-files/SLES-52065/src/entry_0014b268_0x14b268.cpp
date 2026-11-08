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

// Function: entry_0014b268
// Address: 0x14b268 - 0x14b29c
void entry_0014b268_0x14b268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b268_0x14b268");
#endif

    switch (ctx->pc) {
        case 0x14b274u: goto label_14b274;
        case 0x14b294u: goto label_14b294;
        default: break;
    }

    ctx->pc = 0x14b268u;

    // 0x14b268: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b26c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14B26Cu;
    SET_GPR_U32(ctx, 31, 0x14B274u);
    ctx->pc = 0x14B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B26Cu;
    // 0x14b270: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14B26Cu, 0x14B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B274u;
label_14b274:
    // 0x14b274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14b274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b278: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B278u;
    {
        const bool branch_taken_0x14b278 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B278u;
        // 0x14b27c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b278) {
            ctx->pc = 0x14B29Cu;
            return;
        }
    }
    ctx->pc = 0x14B280u;
    // 0x14b280: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14b284: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14b288: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14b28c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14B28Cu;
    SET_GPR_U32(ctx, 31, 0x14B294u);
    ctx->pc = 0x14B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B28Cu;
    // 0x14b290: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14B28Cu, 0x14B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B294u;
label_14b294:
    // 0x14b294: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14B294u;
    SET_GPR_U32(ctx, 31, 0x14B29Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14B294u, 0x14B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B29Cu;
}
