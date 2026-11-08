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

// Function: entry_001c180c
// Address: 0x1c180c - 0x1c1850
void entry_001c180c_0x1c180c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c180c_0x1c180c");
#endif

    switch (ctx->pc) {
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c1848u: goto label_1c1848;
        default: break;
    }

    ctx->pc = 0x1c180cu;

    // 0x1c180c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c1810: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1c1810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1814: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1C1814u;
    SET_GPR_U32(ctx, 31, 0x1C181Cu);
    ctx->pc = 0x1C1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1814u;
    // 0x1c1818: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1C1814u, 0x1C181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C181Cu;
label_1c181c:
    // 0x1c181c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C181Cu;
    {
        const bool branch_taken_0x1c181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C181Cu;
        // 0x1c1820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c181c) {
            ctx->pc = 0x1C1850u;
            return;
        }
    }
    ctx->pc = 0x1C1824u;
    // 0x1c1824: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1828: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1828u;
    SET_GPR_U32(ctx, 31, 0x1C1830u);
    ctx->pc = 0x1C182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1828u;
    // 0x1c182c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1828u, 0x1C1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1830u;
label_1c1830:
    // 0x1c1830: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1830u;
    SET_GPR_U32(ctx, 31, 0x1C1838u);
    ctx->pc = 0x1C1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1830u;
    // 0x1c1834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1830u, 0x1C1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1838u;
label_1c1838:
    // 0x1c1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c183c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1840: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1840u;
    SET_GPR_U32(ctx, 31, 0x1C1848u);
    ctx->pc = 0x1C1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1840u;
    // 0x1c1844: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1840u, 0x1C1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1848u;
label_1c1848:
    // 0x1c1848: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C1848u;
    SET_GPR_U32(ctx, 31, 0x1C1850u);
    ctx->pc = 0x1C184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1848u;
    // 0x1c184c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C1848u, 0x1C1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1850u;
}
