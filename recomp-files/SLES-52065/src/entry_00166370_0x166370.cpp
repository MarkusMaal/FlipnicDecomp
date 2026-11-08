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

// Function: entry_00166370
// Address: 0x166370 - 0x1663dc
void entry_00166370_0x166370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166370_0x166370");
#endif

    switch (ctx->pc) {
        case 0x166378u: goto label_166378;
        case 0x1663ccu: goto label_1663cc;
        default: break;
    }

    ctx->pc = 0x166370u;

    // 0x166370: 0xc059990  jal         func_166640
    ctx->pc = 0x166370u;
    SET_GPR_U32(ctx, 31, 0x166378u);
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x166370u, 0x166378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166378u;
label_166378:
    // 0x166378: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x166378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16637c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16637c) {
            ctx->pc = 0x166430u;
            return;
        }
    }
    ctx->pc = 0x166384u;
    // 0x166384: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x166388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16638c: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x16638Cu;
    {
        const bool branch_taken_0x16638c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x166390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16638Cu;
        // 0x166390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16638c) {
            ctx->pc = 0x166428u;
            return;
        }
    }
    ctx->pc = 0x166394u;
    // 0x166394: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x166394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x166398: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x166398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x16639c: 0xa6030224  sh          $v1, 0x224($s0)
    ctx->pc = 0x16639cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 3));
    // 0x1663a0: 0x86020222  lh          $v0, 0x222($s0)
    ctx->pc = 0x1663a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1663a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1663A4u;
    {
        const bool branch_taken_0x1663a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1663a4) {
            ctx->pc = 0x1663DCu;
            return;
        }
    }
    ctx->pc = 0x1663ACu;
    // 0x1663ac: 0x86030220  lh          $v1, 0x220($s0)
    ctx->pc = 0x1663acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663b0: 0x8602022c  lh          $v0, 0x22C($s0)
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1663b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1663b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1663b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663bc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1663BCu;
    {
        const bool branch_taken_0x1663bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663BCu;
        // 0x1663c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663bc) {
            ctx->pc = 0x1663DCu;
            return;
        }
    }
    ctx->pc = 0x1663C4u;
    // 0x1663c4: 0xc042118  jal         func_108460
    ctx->pc = 0x1663C4u;
    SET_GPR_U32(ctx, 31, 0x1663CCu);
    ctx->pc = 0x1663C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663C4u;
    // 0x1663c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1663C4u, 0x1663CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663CCu;
label_1663cc:
    // 0x1663cc: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1663d0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1663d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1663D4u;
    {
        const bool branch_taken_0x1663d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663D4u;
        // 0x1663d8: 0xa6020220  sh          $v0, 0x220($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663d4) {
            ctx->pc = 0x166404u;
            return;
        }
    }
    ctx->pc = 0x1663DCu;
}
