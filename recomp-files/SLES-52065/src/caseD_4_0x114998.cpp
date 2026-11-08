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

// Function: caseD_4
// Address: 0x114998 - 0x1149f4
void caseD_4_0x114998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x114998");
#endif

    switch (ctx->pc) {
        case 0x114998u: goto label_114998;
        case 0x11499cu: goto label_11499c;
        case 0x1149a0u: goto label_1149a0;
        case 0x1149a4u: goto label_1149a4;
        case 0x1149a8u: goto label_1149a8;
        case 0x1149acu: goto label_1149ac;
        case 0x1149b0u: goto label_1149b0;
        case 0x1149b4u: goto label_1149b4;
        case 0x1149b8u: goto label_1149b8;
        case 0x1149bcu: goto label_1149bc;
        case 0x1149c0u: goto label_1149c0;
        case 0x1149c4u: goto label_1149c4;
        case 0x1149c8u: goto label_1149c8;
        case 0x1149ccu: goto label_1149cc;
        case 0x1149d0u: goto label_1149d0;
        case 0x1149d4u: goto label_1149d4;
        case 0x1149d8u: goto label_1149d8;
        case 0x1149dcu: goto label_1149dc;
        case 0x1149e0u: goto label_1149e0;
        case 0x1149e4u: goto label_1149e4;
        case 0x1149e8u: goto label_1149e8;
        case 0x1149ecu: goto label_1149ec;
        case 0x1149f0u: goto label_1149f0;
        default: break;
    }

    ctx->pc = 0x114998u;

label_114998:
    // 0x114998: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x114998u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11499c:
    // 0x11499c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x11499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1149a0:
    // 0x1149a0: 0x64030002  daddiu      $v1, $zero, 0x2
    ctx->pc = 0x1149a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1149a4:
    // 0x1149a4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1149a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1149a8:
    // 0x1149a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1149a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1149ac:
    // 0x1149ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1149acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1149b0:
    // 0x1149b0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1149b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1149b4:
    // 0x1149b4: 0x93828264  lbu         $v0, -0x7D9C($gp)
    ctx->pc = 0x1149b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935140)));
label_1149b8:
    // 0x1149b8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1149b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1149bc:
    // 0x1149bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1149bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1149c0:
    // 0x1149c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1149c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1149c4:
    // 0x1149c4: 0x320f809  jalr        $t9
label_1149c8:
    if (ctx->pc == 0x1149C8u) {
        ctx->pc = 0x1149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C4u;
        // 0x1149c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149CCu;
        goto label_1149cc;
    }
    ctx->pc = 0x1149C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1149CCu);
        ctx->pc = 0x1149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149C4u;
        // 0x1149c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149C4u, 0x1149CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1149CCu;
label_1149cc:
    // 0x1149cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1149d0:
    if (ctx->pc == 0x1149D0u) {
        ctx->pc = 0x1149D4u;
        goto label_1149d4;
    }
    ctx->pc = 0x1149CCu;
    {
        const bool branch_taken_0x1149cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1149cc) {
            ctx->pc = 0x1149F4u;
            return;
        }
    }
    ctx->pc = 0x1149D4u;
label_1149d4:
    // 0x1149d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1149d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1149d8:
    // 0x1149d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1149d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1149dc:
    // 0x1149dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1149dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1149e0:
    // 0x1149e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1149e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1149e4:
    // 0x1149e4: 0x320f809  jalr        $t9
label_1149e8:
    if (ctx->pc == 0x1149E8u) {
        ctx->pc = 0x1149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149E4u;
        // 0x1149e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149ECu;
        goto label_1149ec;
    }
    ctx->pc = 0x1149E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1149ECu);
        ctx->pc = 0x1149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149E4u;
        // 0x1149e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149E4u, 0x1149ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1149ECu;
label_1149ec:
    // 0x1149ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1149f0:
    if (ctx->pc == 0x1149F0u) {
        ctx->pc = 0x1149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149ECu;
        // 0x1149f0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1149F4u;
        goto label_fallthrough_0x1149ec;
    }
    ctx->pc = 0x1149ECu;
    {
        const bool branch_taken_0x1149ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1149F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149ECu;
        // 0x1149f0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1149ec) {
            ctx->pc = 0x1149F8u;
            return;
        }
    }
label_fallthrough_0x1149ec:
    ctx->pc = 0x1149F4u;
}
