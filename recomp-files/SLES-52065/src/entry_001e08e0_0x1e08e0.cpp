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

// Function: entry_001e08e0
// Address: 0x1e08e0 - 0x1e0918
void entry_001e08e0_0x1e08e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e08e0_0x1e08e0");
#endif

    switch (ctx->pc) {
        case 0x1e08ecu: goto label_1e08ec;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e090cu: goto label_1e090c;
        default: break;
    }

    ctx->pc = 0x1e08e0u;

    // 0x1e08e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e08e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08e4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E08E4u;
    SET_GPR_U32(ctx, 31, 0x1E08ECu);
    ctx->pc = 0x1E08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08E4u;
    // 0x1e08e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E08E4u, 0x1E08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08ECu;
label_1e08ec:
    // 0x1e08ec: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1e08ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e08f0: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1e08f4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E08F4u;
    SET_GPR_U32(ctx, 31, 0x1E08FCu);
    ctx->pc = 0x1E08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08F4u;
    // 0x1e08f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E08F4u, 0x1E08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08FCu;
label_1e08fc:
    // 0x1e08fc: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1e08fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1e0900: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e0900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e0904: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0904u;
    SET_GPR_U32(ctx, 31, 0x1E090Cu);
    ctx->pc = 0x1E0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0904u;
    // 0x1e0908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0904u, 0x1E090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E090Cu;
label_1e090c:
    // 0x1e090c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e090cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1e0910: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E0910u;
    {
        const bool branch_taken_0x1e0910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0910u;
        // 0x1e0914: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0910) {
            ctx->pc = 0x1E094Cu;
            return;
        }
    }
    ctx->pc = 0x1E0918u;
}
