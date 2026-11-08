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

// Function: entry_0011592c
// Address: 0x11592c - 0x1159a4
void entry_0011592c_0x11592c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011592c_0x11592c");
#endif

    switch (ctx->pc) {
        case 0x11594cu: goto label_11594c;
        case 0x115970u: goto label_115970;
        default: break;
    }

    ctx->pc = 0x11592cu;

label_11592c:
    // 0x11592c: 0x93828308  lbu         $v0, -0x7CF8($gp)
    ctx->pc = 0x11592cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935304)));
label_115930:
    // 0x115930: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
label_115934:
    // 0x115934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115938:
    // 0x115938: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_11593c:
    // 0x11593c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x11593cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115940:
    // 0x115940: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115944:
    // 0x115944: 0x320f809  jalr        $t9
label_115948:
    if (ctx->pc == 0x115948u) {
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11594Cu;
        goto label_11594c;
    }
    ctx->pc = 0x115944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11594Cu);
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115944u, 0x11594Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11594Cu;
label_11594c:
    // 0x11594c: 0x9382830c  lbu         $v0, -0x7CF4($gp)
    ctx->pc = 0x11594cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935308)));
label_115950:
    // 0x115950: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_115954:
    // 0x115954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115958:
    // 0x115958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11595c:
    // 0x11595c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x11595cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115960:
    // 0x115960: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115964:
    // 0x115964: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115968:
    // 0x115968: 0x320f809  jalr        $t9
label_11596c:
    if (ctx->pc == 0x11596Cu) {
        ctx->pc = 0x11596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115968u;
        // 0x11596c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115970u;
        goto label_115970;
    }
    ctx->pc = 0x115968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115970u);
        ctx->pc = 0x11596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115968u;
        // 0x11596c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115968u, 0x115970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115970u;
label_115970:
    // 0x115970: 0x8e44026c  lw          $a0, 0x26C($s2)
    ctx->pc = 0x115970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_115974:
    // 0x115974: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x115974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_115978:
    // 0x115978: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x115978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_11597c:
    // 0x11597c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_115980:
    // 0x115980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_115984:
    // 0x115984: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x115984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_115988:
    // 0x115988: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x115988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_11598c:
    // 0x11598c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_115990:
    if (ctx->pc == 0x115990u) {
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115994u;
        goto label_115994;
    }
    ctx->pc = 0x11598Cu;
    {
        const bool branch_taken_0x11598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11598Cu;
        // 0x115990: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11598c) {
            ctx->pc = 0x1159A4u;
            return;
        }
    }
    ctx->pc = 0x115994u;
label_115994:
    // 0x115994: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x115994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_115998:
    // 0x115998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11599c:
    // 0x11599c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x11599cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1159a0:
    // 0x1159a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1159a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1159a4u;
}
