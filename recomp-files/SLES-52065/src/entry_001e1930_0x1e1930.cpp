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

// Function: entry_001e1930
// Address: 0x1e1930 - 0x1e1968
void entry_001e1930_0x1e1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1930_0x1e1930");
#endif

    switch (ctx->pc) {
        case 0x1e1950u: goto label_1e1950;
        default: break;
    }

    ctx->pc = 0x1e1930u;

    // 0x1e1930: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1934: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x1e1934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
    // 0x1e1938: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1938u;
    {
        const bool branch_taken_0x1e1938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1938u;
        // 0x1e193c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1938) {
            ctx->pc = 0x1E1968u;
            return;
        }
    }
    ctx->pc = 0x1E1940u;
    // 0x1e1940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1944: 0x24c6b830  addiu       $a2, $a2, -0x47D0
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948912));
    // 0x1e1948: 0xc078bac  jal         func_1E2EB0
    ctx->pc = 0x1E1948u;
    SET_GPR_U32(ctx, 31, 0x1E1950u);
    ctx->pc = 0x1E194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1948u;
    // 0x1e194c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E1948u, 0x1E1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1950u;
label_1e1950:
    // 0x1e1950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1968u;
            return;
        }
    }
    ctx->pc = 0x1E1958u;
    // 0x1e1958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e195c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1960: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1960u;
    SET_GPR_U32(ctx, 31, 0x1E1968u);
    ctx->pc = 0x1E1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1960u;
    // 0x1e1964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1960u, 0x1E1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1968u;
}
