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

// Function: entry_001155a4
// Address: 0x1155a4 - 0x115618
void entry_001155a4_0x1155a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001155a4_0x1155a4");
#endif

    switch (ctx->pc) {
        case 0x1155c8u: goto label_1155c8;
        default: break;
    }

    ctx->pc = 0x1155a4u;

label_1155a4:
    // 0x1155a4: 0x938282e4  lbu         $v0, -0x7D1C($gp)
    ctx->pc = 0x1155a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_1155a8:
    // 0x1155a8: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1155ac:
    // 0x1155ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1155acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1155b0:
    // 0x1155b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1155b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1155b4:
    // 0x1155b4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1155b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1155b8:
    // 0x1155b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1155bc:
    // 0x1155bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1155c0:
    // 0x1155c0: 0x320f809  jalr        $t9
label_1155c4:
    if (ctx->pc == 0x1155C4u) {
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155C8u;
        goto label_1155c8;
    }
    ctx->pc = 0x1155C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1155C8u);
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155C0u, 0x1155C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1155C8u;
label_1155c8:
    // 0x1155c8: 0x92460255  lbu         $a2, 0x255($s2)
    ctx->pc = 0x1155c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1155cc:
    // 0x1155cc: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x1155ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1155d0:
    // 0x1155d0: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1155d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1155d4:
    // 0x1155d4: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x1155d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_1155d8:
    // 0x1155d8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1155dc:
    // 0x1155dc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1155e0:
    // 0x1155e0: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1155e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1155e4:
    // 0x1155e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1155e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1155e8:
    // 0x1155e8: 0xa2440255  sb          $a0, 0x255($s2)
    ctx->pc = 0x1155e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 4));
label_1155ec:
    // 0x1155ec: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x1155ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1155f0:
    // 0x1155f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1155f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1155f4:
    // 0x1155f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1155f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1155f8:
    // 0x1155f8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1155f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_1155fc:
    // 0x1155fc: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115600:
    // 0x115600: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x115600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_115604:
    // 0x115604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_115608:
    if (ctx->pc == 0x115608u) {
        ctx->pc = 0x11560Cu;
        goto label_11560c;
    }
    ctx->pc = 0x115604u;
    {
        const bool branch_taken_0x115604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115604) {
            ctx->pc = 0x115618u;
            return;
        }
    }
    ctx->pc = 0x11560Cu;
label_11560c:
    // 0x11560c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x11560cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115610:
    // 0x115610: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_115614:
    // 0x115614: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x115614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x115618u;
}
