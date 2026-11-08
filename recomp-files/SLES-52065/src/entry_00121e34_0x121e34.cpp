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

// Function: entry_00121e34
// Address: 0x121e34 - 0x121eb4
void entry_00121e34_0x121e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121e34_0x121e34");
#endif

    switch (ctx->pc) {
        case 0x121e50u: goto label_121e50;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e7cu: goto label_121e7c;
        case 0x121ea4u: goto label_121ea4;
        case 0x121eacu: goto label_121eac;
        default: break;
    }

    ctx->pc = 0x121e34u;

label_121e34:
    // 0x121e34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x121e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121e38:
    // 0x121e38: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_121e3c:
    if (ctx->pc == 0x121E3Cu) {
        ctx->pc = 0x121E40u;
        goto label_121e40;
    }
    ctx->pc = 0x121E38u;
    {
        const bool branch_taken_0x121e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121e38) {
            ctx->pc = 0x121EB4u;
            return;
        }
    }
    ctx->pc = 0x121E40u;
label_121e40:
    // 0x121e40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e44:
    // 0x121e44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121e48:
    // 0x121e48: 0x320f809  jalr        $t9
label_121e4c:
    if (ctx->pc == 0x121E4Cu) {
        ctx->pc = 0x121E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E48u;
        // 0x121e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E50u;
        goto label_121e50;
    }
    ctx->pc = 0x121E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121E50u);
        ctx->pc = 0x121E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E48u;
        // 0x121e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E48u, 0x121E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E50u;
label_121e50:
    // 0x121e50: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_121e54:
    if (ctx->pc == 0x121E54u) {
        ctx->pc = 0x121E58u;
        goto label_121e58;
    }
    ctx->pc = 0x121E50u;
    {
        const bool branch_taken_0x121e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e50) {
            ctx->pc = 0x121ED8u;
            return;
        }
    }
    ctx->pc = 0x121E58u;
label_121e58:
    // 0x121e58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e5c:
    // 0x121e5c: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_121e60:
    // 0x121e60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121e64:
    // 0x121e64: 0x320f809  jalr        $t9
label_121e68:
    if (ctx->pc == 0x121E68u) {
        ctx->pc = 0x121E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E64u;
        // 0x121e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E6Cu;
        goto label_121e6c;
    }
    ctx->pc = 0x121E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121E6Cu);
        ctx->pc = 0x121E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E64u;
        // 0x121e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E64u, 0x121E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E6Cu;
label_121e6c:
    // 0x121e6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x121e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_121e70:
    // 0x121e70: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_121e74:
    // 0x121e74: 0xc047d94  jal         func_11F650
label_121e78:
    if (ctx->pc == 0x121E78u) {
        ctx->pc = 0x121E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E74u;
        // 0x121e78: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E7Cu;
        goto label_121e7c;
    }
    ctx->pc = 0x121E74u;
    SET_GPR_U32(ctx, 31, 0x121E7Cu);
    ctx->pc = 0x121E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E74u;
    // 0x121e78: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F650u, 0x121E74u, 0x121E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E7Cu;
label_121e7c:
    // 0x121e7c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x121e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_121e80:
    // 0x121e80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x121e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_121e84:
    // 0x121e84: 0x8e422030  lw          $v0, 0x2030($s2)
    ctx->pc = 0x121e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
label_121e88:
    // 0x121e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121e8c:
    // 0x121e8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e90:
    // 0x121e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x121e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_121e94:
    // 0x121e94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x121e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121e98:
    // 0x121e98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121e9c:
    // 0x121e9c: 0x320f809  jalr        $t9
label_121ea0:
    if (ctx->pc == 0x121EA0u) {
        ctx->pc = 0x121EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E9Cu;
        // 0x121ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EA4u;
        goto label_121ea4;
    }
    ctx->pc = 0x121E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121EA4u);
        ctx->pc = 0x121EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E9Cu;
        // 0x121ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E9Cu, 0x121EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121EA4u;
label_121ea4:
    // 0x121ea4: 0xc05f378  jal         func_17CDE0
label_121ea8:
    if (ctx->pc == 0x121EA8u) {
        ctx->pc = 0x121EACu;
        goto label_121eac;
    }
    ctx->pc = 0x121EA4u;
    SET_GPR_U32(ctx, 31, 0x121EACu);
    ctx->pc = 0x17CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CDE0u, 0x121EA4u, 0x121EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EACu;
label_121eac:
    // 0x121eac: 0x1000000b  b           . + 4 + (0xB << 2)
label_121eb0:
    if (ctx->pc == 0x121EB0u) {
        ctx->pc = 0x121EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EACu;
        // 0x121eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EB4u;
        goto label_fallthrough_0x121eac;
    }
    ctx->pc = 0x121EACu;
    {
        const bool branch_taken_0x121eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EACu;
        // 0x121eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121eac) {
            ctx->pc = 0x121EDCu;
            return;
        }
    }
label_fallthrough_0x121eac:
    ctx->pc = 0x121EB4u;
}
