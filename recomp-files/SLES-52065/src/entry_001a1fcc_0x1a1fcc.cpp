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

// Function: entry_001a1fcc
// Address: 0x1a1fcc - 0x1a2014
void entry_001a1fcc_0x1a1fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1fcc_0x1a1fcc");
#endif

    switch (ctx->pc) {
        case 0x1a1ff0u: goto label_1a1ff0;
        default: break;
    }

    ctx->pc = 0x1a1fccu;

label_1a1fcc:
    // 0x1a1fcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a1fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a1fd0:
    // 0x1a1fd0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a1fd4:
    if (ctx->pc == 0x1A1FD4u) {
        ctx->pc = 0x1A1FD8u;
        goto label_1a1fd8;
    }
    ctx->pc = 0x1A1FD0u;
    {
        const bool branch_taken_0x1a1fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1fd0) {
            ctx->pc = 0x1A2034u;
            return;
        }
    }
    ctx->pc = 0x1A1FD8u;
label_1a1fd8:
    // 0x1a1fd8: 0xa2400020  sb          $zero, 0x20($s2)
    ctx->pc = 0x1a1fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 0));
label_1a1fdc:
    // 0x1a1fdc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a1fe0:
    // 0x1a1fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1fe4:
    // 0x1a1fe4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a1fe8:
    // 0x1a1fe8: 0x320f809  jalr        $t9
label_1a1fec:
    if (ctx->pc == 0x1A1FECu) {
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FF0u;
        goto label_1a1ff0;
    }
    ctx->pc = 0x1A1FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1FF0u);
        ctx->pc = 0x1A1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FE8u;
        // 0x1a1fec: 0x92450020  lbu         $a1, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FE8u, 0x1A1FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1FF0u;
label_1a1ff0:
    // 0x1a1ff0: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1a1ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_1a1ff4:
    // 0x1a1ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1ff8:
    if (ctx->pc == 0x1A1FF8u) {
        ctx->pc = 0x1A1FFCu;
        goto label_1a1ffc;
    }
    ctx->pc = 0x1A1FF4u;
    {
        const bool branch_taken_0x1a1ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ff4) {
            ctx->pc = 0x1A2014u;
            return;
        }
    }
    ctx->pc = 0x1A1FFCu;
label_1a1ffc:
    // 0x1a1ffc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a2000:
    // 0x1a2000: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a2000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a2004:
    // 0x1a2004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a2004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2008:
    // 0x1a2008: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a2008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a200c:
    // 0x1a200c: 0x320f809  jalr        $t9
label_1a2010:
    if (ctx->pc == 0x1A2010u) {
        ctx->pc = 0x1A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A200Cu;
        // 0x1a2010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2014u;
        goto label_fallthrough_0x1a200c;
    }
    ctx->pc = 0x1A200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2014u);
        ctx->pc = 0x1A2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A200Cu;
        // 0x1a2010: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A200Cu, 0x1A2014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a200c:
    ctx->pc = 0x1A2014u;
}
