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

// Function: entry_001b019c
// Address: 0x1b019c - 0x1b0204
void entry_001b019c_0x1b019c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b019c_0x1b019c");
#endif

    switch (ctx->pc) {
        case 0x1b01a4u: goto label_1b01a4;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01fcu: goto label_1b01fc;
        default: break;
    }

    ctx->pc = 0x1b019cu;

    // 0x1b019c: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B019Cu;
    SET_GPR_U32(ctx, 31, 0x1B01A4u);
    ctx->pc = 0x1B01A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B019Cu;
    // 0x1b01a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B019Cu, 0x1B01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01A4u;
label_1b01a4:
    // 0x1b01a4: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x1b01a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x1b01a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b01ac: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x1b01acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x1b01b0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b01b4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1b01b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b01b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01bc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1b01bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b01c0: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b01c4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1b01c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01c8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1b01c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01cc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b01ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b01d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01d4: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B01D4u, 0x1B01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b01e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b01e4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1b01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1b01e8: 0x8fb100d0  lw          $s1, 0xD0($sp)
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b01ec: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b01ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b01f0: 0x8e96011c  lw          $s6, 0x11C($s4)
    ctx->pc = 0x1b01f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b01f4: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1B01F4u;
    SET_GPR_U32(ctx, 31, 0x1B01FCu);
    ctx->pc = 0x1B01F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01F4u;
    // 0x1b01f8: 0x27b000e0  addiu       $s0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B01F4u, 0x1B01FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01FCu;
label_1b01fc:
    // 0x1b01fc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01FCu;
        // 0x1b0200: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B0380u;
            return;
        }
    }
    ctx->pc = 0x1B0204u;
}
