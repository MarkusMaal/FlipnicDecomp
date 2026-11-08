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

// Function: entry_001c54ec
// Address: 0x1c54ec - 0x1c5510
void entry_001c54ec_0x1c54ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c54ec_0x1c54ec");
#endif

    switch (ctx->pc) {
        case 0x1c5500u: goto label_1c5500;
        default: break;
    }

    ctx->pc = 0x1c54ecu;

    // 0x1c54ec: 0x0  nop
    ctx->pc = 0x1c54ecu;
    // NOP
    // 0x1c54f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c54f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1C54F8u;
    SET_GPR_U32(ctx, 31, 0x1C5500u);
    ctx->pc = 0x1C54FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C54F8u;
    // 0x1c54fc: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1C54F8u, 0x1C5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5500u;
label_1c5500:
    // 0x1c5500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c5504: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x1c5504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c5508: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C5508u;
    {
        const bool branch_taken_0x1c5508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5508u;
        // 0x1c550c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5508) {
            ctx->pc = 0x1C54B4u;
            return;
        }
    }
    ctx->pc = 0x1C5510u;
}
