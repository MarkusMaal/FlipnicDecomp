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

// Function: entry_0019c164
// Address: 0x19c164 - 0x19c1c4
void entry_0019c164_0x19c164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c164_0x19c164");
#endif

    switch (ctx->pc) {
        case 0x19c1a0u: goto label_19c1a0;
        case 0x19c1b4u: goto label_19c1b4;
        case 0x19c1bcu: goto label_19c1bc;
        default: break;
    }

    ctx->pc = 0x19c164u;

    // 0x19c164: 0xa2200938  sb          $zero, 0x938($s1)
    ctx->pc = 0x19c164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2360), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c168: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x19c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x19c16c: 0xae200930  sw          $zero, 0x930($s1)
    ctx->pc = 0x19c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2352), GPR_U32(ctx, 0));
    // 0x19c170: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19c174: 0x8e250910  lw          $a1, 0x910($s1)
    ctx->pc = 0x19c174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x19c178: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x19c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x19c17c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19c180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c184: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19c184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19c188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c18c: 0xae23091c  sw          $v1, 0x91C($s1)
    ctx->pc = 0x19c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2332), GPR_U32(ctx, 3));
    // 0x19c190: 0x8e230928  lw          $v1, 0x928($s1)
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c194: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x19c194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19c198: 0xc069a9c  jal         func_1A6A70
    ctx->pc = 0x19C198u;
    SET_GPR_U32(ctx, 31, 0x19C1A0u);
    ctx->pc = 0x19C19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C198u;
    // 0x19c19c: 0xae220920  sw          $v0, 0x920($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x19C198u, 0x19C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1A0u;
label_19c1a0:
    // 0x19c1a0: 0x8e260928  lw          $a2, 0x928($s1)
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2344)));
    // 0x19c1a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19c1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1ac: 0xc064a88  jal         func_192A20
    ctx->pc = 0x19C1ACu;
    SET_GPR_U32(ctx, 31, 0x19C1B4u);
    ctx->pc = 0x19C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1ACu;
    // 0x19c1b0: 0x24a50228  addiu       $a1, $a1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A20u, 0x19C1ACu, 0x19C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1B4u;
label_19c1b4:
    // 0x19c1b4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19C1B4u;
    SET_GPR_U32(ctx, 31, 0x19C1BCu);
    ctx->pc = 0x19C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1B4u;
    // 0x19c1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C1B4u, 0x19C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1BCu;
label_19c1bc:
    // 0x19c1bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x19C1BCu;
    {
        const bool branch_taken_0x19c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c1bc) {
            ctx->pc = 0x19C328u;
            return;
        }
    }
    ctx->pc = 0x19C1C4u;
}
