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

// Function: entry_0012aaf0
// Address: 0x12aaf0 - 0x12ab7c
void entry_0012aaf0_0x12aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aaf0_0x12aaf0");
#endif

    switch (ctx->pc) {
        case 0x12ab20u: goto label_12ab20;
        case 0x12ab4cu: goto label_12ab4c;
        default: break;
    }

    ctx->pc = 0x12aaf0u;

label_12aaf0:
    // 0x12aaf0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12aaf4:
    // 0x12aaf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12aaf8:
    // 0x12aaf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12aafc:
    // 0x12aafc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12ab00:
    // 0x12ab00: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_12ab04:
    // 0x12ab04: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12ab08:
    // 0x12ab08: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_12ab0c:
    // 0x12ab0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12ab10:
    // 0x12ab10: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x12ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12ab14:
    // 0x12ab14: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_12ab18:
    // 0x12ab18: 0x320f809  jalr        $t9
label_12ab1c:
    if (ctx->pc == 0x12AB1Cu) {
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB20u;
        goto label_12ab20;
    }
    ctx->pc = 0x12AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12AB20u);
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AB18u, 0x12AB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AB20u;
label_12ab20:
    // 0x12ab20: 0x51f021  addu        $fp, $v0, $s1
    ctx->pc = 0x12ab20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_12ab24:
    // 0x12ab24: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x12ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12ab28:
    // 0x12ab28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_12ab2c:
    // 0x12ab2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12ab30:
    // 0x12ab30: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12ab34:
    // 0x12ab34: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_12ab38:
    // 0x12ab38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12ab3c:
    // 0x12ab3c: 0x8c510090  lw          $s1, 0x90($v0)
    ctx->pc = 0x12ab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_12ab40:
    // 0x12ab40: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x12ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_12ab44:
    // 0x12ab44: 0xc04e848  jal         func_13A120
label_12ab48:
    if (ctx->pc == 0x12AB48u) {
        ctx->pc = 0x12AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB44u;
        // 0x12ab48: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB4Cu;
        goto label_12ab4c;
    }
    ctx->pc = 0x12AB44u;
    SET_GPR_U32(ctx, 31, 0x12AB4Cu);
    ctx->pc = 0x12AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB44u;
    // 0x12ab48: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A120u, 0x12AB44u, 0x12AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB4Cu;
label_12ab4c:
    // 0x12ab4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12ab50:
    // 0x12ab50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12ab50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab54:
    // 0x12ab54: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x12ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_12ab58:
    // 0x12ab58: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x12ab58u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12ab5c:
    // 0x12ab5c: 0x8e3700a0  lw          $s7, 0xA0($s1)
    ctx->pc = 0x12ab5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_12ab60:
    // 0x12ab60: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_12ab64:
    // 0x12ab64: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x12ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_12ab68:
    // 0x12ab68: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x12ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_12ab6c:
    // 0x12ab6c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_12ab70:
    // 0x12ab70: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x12ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_12ab74:
    // 0x12ab74: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_12ab78:
    // 0x12ab78: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x12ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x12ab7cu;
}
