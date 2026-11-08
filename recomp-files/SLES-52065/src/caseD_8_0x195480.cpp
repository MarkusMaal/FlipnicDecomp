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

// Function: caseD_8
// Address: 0x195480 - 0x1954e0
void caseD_8_0x195480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x195480");
#endif

    switch (ctx->pc) {
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        default: break;
    }

    ctx->pc = 0x195480u;

label_195480:
    // 0x195480: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x195480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_195484:
    // 0x195484: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195488:
    // 0x195488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19548c:
    // 0x19548c: 0x8f95831c  lw          $s5, -0x7CE4($gp)
    ctx->pc = 0x19548cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
label_195490:
    // 0x195490: 0x9072002e  lbu         $s2, 0x2E($v1)
    ctx->pc = 0x195490u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_195494:
    // 0x195494: 0xaf82831c  sw          $v0, -0x7CE4($gp)
    ctx->pc = 0x195494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 2));
label_195498:
    // 0x195498: 0xa062002e  sb          $v0, 0x2E($v1)
    ctx->pc = 0x195498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 2));
label_19549c:
    // 0x19549c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x19549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954a0:
    // 0x1954a0: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x1954a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_1954a4:
    // 0x1954a4: 0xa06201d3  sb          $v0, 0x1D3($v1)
    ctx->pc = 0x1954a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 2));
label_1954a8:
    // 0x1954a8: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x1954a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1954ac:
    // 0x1954ac: 0x8c99000c  lw          $t9, 0xC($a0)
    ctx->pc = 0x1954acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1954b0:
    // 0x1954b0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1954b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_1954b4:
    // 0x1954b4: 0x320f809  jalr        $t9
label_1954b8:
    if (ctx->pc == 0x1954B8u) {
        ctx->pc = 0x1954BCu;
        goto label_1954bc;
    }
    ctx->pc = 0x1954B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1954BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1954B4u, 0x1954BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1954BCu;
label_1954bc:
    // 0x1954bc: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x1954bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_1954c0:
    // 0x1954c0: 0xc046240  jal         func_118900
label_1954c4:
    if (ctx->pc == 0x1954C4u) {
        ctx->pc = 0x1954C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954C0u;
        // 0x1954c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954C8u;
        goto label_1954c8;
    }
    ctx->pc = 0x1954C0u;
    SET_GPR_U32(ctx, 31, 0x1954C8u);
    ctx->pc = 0x1954C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954C0u;
    // 0x1954c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118900u, 0x1954C0u, 0x1954C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954C8u;
label_1954c8:
    // 0x1954c8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954cc:
    // 0x1954cc: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x1954ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_1954d0:
    // 0x1954d0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1954d4:
    if (ctx->pc == 0x1954D4u) {
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D8u;
        goto label_1954d8;
    }
    ctx->pc = 0x1954D0u;
    {
        const bool branch_taken_0x1954d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954D0u;
        // 0x1954d4: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954d0) {
            ctx->pc = 0x1954E0u;
            return;
        }
    }
    ctx->pc = 0x1954D8u;
label_1954d8:
    // 0x1954d8: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1954dc:
    // 0x1954dc: 0xa060002e  sb          $zero, 0x2E($v1)
    ctx->pc = 0x1954dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1954e0u;
}
