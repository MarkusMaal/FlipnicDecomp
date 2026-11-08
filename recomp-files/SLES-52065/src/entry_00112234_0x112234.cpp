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

// Function: entry_00112234
// Address: 0x112234 - 0x112264
void entry_00112234_0x112234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112234_0x112234");
#endif

    switch (ctx->pc) {
        case 0x11225cu: goto label_11225c;
        default: break;
    }

    ctx->pc = 0x112234u;

    // 0x112234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11223c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112240: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112244: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11224c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112250: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112254: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x112254u;
    SET_GPR_U32(ctx, 31, 0x11225Cu);
    ctx->pc = 0x112258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112254u;
    // 0x112258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x112254u, 0x11225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11225Cu;
label_11225c:
    // 0x11225c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x11225cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x112264u;
}
