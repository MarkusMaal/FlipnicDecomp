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

// Function: entry_00202bc4
// Address: 0x202bc4 - 0x202c00
void entry_00202bc4_0x202bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202bc4_0x202bc4");
#endif

    switch (ctx->pc) {
        case 0x202bccu: goto label_202bcc;
        case 0x202be0u: goto label_202be0;
        default: break;
    }

    ctx->pc = 0x202bc4u;

    // 0x202bc4: 0xc08025a  jal         func_200968
    ctx->pc = 0x202BC4u;
    SET_GPR_U32(ctx, 31, 0x202BCCu);
    ctx->pc = 0x202BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BC4u;
    // 0x202bc8: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200968u, 0x202BC4u, 0x202BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BCCu;
label_202bcc:
    // 0x202bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x202bd4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x202bd8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202BD8u;
    SET_GPR_U32(ctx, 31, 0x202BE0u);
    ctx->pc = 0x202BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BD8u;
    // 0x202bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202BD8u, 0x202BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BE0u;
label_202be0:
    // 0x202be0: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x202BE0u;
    {
        const bool branch_taken_0x202be0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x202be0) {
            ctx->pc = 0x202C74u;
            return;
        }
    }
    ctx->pc = 0x202BE8u;
    // 0x202be8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202BE8u;
    {
        const bool branch_taken_0x202be8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x202be8) {
            ctx->pc = 0x202C00u;
            return;
        }
    }
    ctx->pc = 0x202BF0u;
    // 0x202bf0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x202bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202bf4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202bf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x202BF8u;
    {
        const bool branch_taken_0x202bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BF8u;
        // 0x202bfc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf8) {
            ctx->pc = 0x202CA0u;
            return;
        }
    }
    ctx->pc = 0x202C00u;
}
