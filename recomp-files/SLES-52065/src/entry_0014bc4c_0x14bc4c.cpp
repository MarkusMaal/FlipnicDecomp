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

// Function: entry_0014bc4c
// Address: 0x14bc4c - 0x14bc7c
void entry_0014bc4c_0x14bc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc4c_0x14bc4c");
#endif

    switch (ctx->pc) {
        case 0x14bc54u: goto label_14bc54;
        case 0x14bc74u: goto label_14bc74;
        default: break;
    }

    ctx->pc = 0x14bc4cu;

    // 0x14bc4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14BC4Cu;
    SET_GPR_U32(ctx, 31, 0x14BC54u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14BC4Cu, 0x14BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC54u;
label_14bc54:
    // 0x14bc54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14bc54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc58: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BC58u;
    {
        const bool branch_taken_0x14bc58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC58u;
        // 0x14bc5c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc58) {
            ctx->pc = 0x14BC7Cu;
            return;
        }
    }
    ctx->pc = 0x14BC60u;
    // 0x14bc60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14bc64: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14bc68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14bc6c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14BC6Cu;
    SET_GPR_U32(ctx, 31, 0x14BC74u);
    ctx->pc = 0x14BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC6Cu;
    // 0x14bc70: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14BC6Cu, 0x14BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC74u;
label_14bc74:
    // 0x14bc74: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14BC74u;
    SET_GPR_U32(ctx, 31, 0x14BC7Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14BC74u, 0x14BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC7Cu;
}
