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

// Function: entry_0017b96c
// Address: 0x17b96c - 0x17b98c
void entry_0017b96c_0x17b96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b96c_0x17b96c");
#endif

    switch (ctx->pc) {
        case 0x17b984u: goto label_17b984;
        default: break;
    }

    ctx->pc = 0x17b96cu;

    // 0x17b96c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17b970: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b974: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17b978: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b97c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B97Cu;
    SET_GPR_U32(ctx, 31, 0x17B984u);
    ctx->pc = 0x17B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B97Cu;
    // 0x17b980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B97Cu, 0x17B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B984u;
label_17b984:
    // 0x17b984: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17B984u;
    {
        const bool branch_taken_0x17b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B984u;
        // 0x17b988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b984) {
            ctx->pc = 0x17B9DCu;
            return;
        }
    }
    ctx->pc = 0x17B98Cu;
}
