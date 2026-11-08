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

// Function: entry_0010b724
// Address: 0x10b724 - 0x10b780
void entry_0010b724_0x10b724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b724_0x10b724");
#endif

    switch (ctx->pc) {
        case 0x10b73cu: goto label_10b73c;
        case 0x10b750u: goto label_10b750;
        default: break;
    }

    ctx->pc = 0x10b724u;

label_10b724:
    // 0x10b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b728:
    // 0x10b728: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x10b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10b72c:
    // 0x10b72c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10b72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10b730:
    // 0x10b730: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10b730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10b734:
    // 0x10b734: 0xc043160  jal         func_10C580
label_10b738:
    if (ctx->pc == 0x10B738u) {
        ctx->pc = 0x10B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B734u;
        // 0x10b738: 0x26050220  addiu       $a1, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B73Cu;
        goto label_10b73c;
    }
    ctx->pc = 0x10B734u;
    SET_GPR_U32(ctx, 31, 0x10B73Cu);
    ctx->pc = 0x10B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B734u;
    // 0x10b738: 0x26050220  addiu       $a1, $s0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C580u, 0x10B734u, 0x10B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B73Cu;
label_10b73c:
    // 0x10b73c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b740:
    // 0x10b740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b744:
    // 0x10b744: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10b748:
    // 0x10b748: 0x320f809  jalr        $t9
label_10b74c:
    if (ctx->pc == 0x10B74Cu) {
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B750u;
        goto label_10b750;
    }
    ctx->pc = 0x10B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B750u);
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B748u, 0x10B750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B750u;
label_10b750:
    // 0x10b750: 0x8e03231c  lw          $v1, 0x231C($s0)
    ctx->pc = 0x10b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8988)));
label_10b754:
    // 0x10b754: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_10b758:
    if (ctx->pc == 0x10B758u) {
        ctx->pc = 0x10B75Cu;
        goto label_10b75c;
    }
    ctx->pc = 0x10B754u;
    {
        const bool branch_taken_0x10b754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b754) {
            ctx->pc = 0x10B814u;
            return;
        }
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0xae0043e0  sw          $zero, 0x43E0($s0)
    ctx->pc = 0x10b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17376), GPR_U32(ctx, 0));
label_10b760:
    // 0x10b760: 0x8e0543d8  lw          $a1, 0x43D8($s0)
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17368)));
label_10b764:
    // 0x10b764: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_10b768:
    if (ctx->pc == 0x10B768u) {
        ctx->pc = 0x10B76Cu;
        goto label_10b76c;
    }
    ctx->pc = 0x10B764u;
    {
        const bool branch_taken_0x10b764 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10b764) {
            ctx->pc = 0x10B780u;
            return;
        }
    }
    ctx->pc = 0x10B76Cu;
label_10b76c:
    // 0x10b76c: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
label_10b770:
    // 0x10b770: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10b774:
    // 0x10b774: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b778:
    // 0x10b778: 0xc046744  jal         func_119D10
label_10b77c:
    if (ctx->pc == 0x10B77Cu) {
        ctx->pc = 0x10B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B778u;
        // 0x10b77c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B780u;
        goto label_fallthrough_0x10b778;
    }
    ctx->pc = 0x10B778u;
    SET_GPR_U32(ctx, 31, 0x10B780u);
    ctx->pc = 0x10B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B778u;
    // 0x10b77c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B778u, 0x10B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x10b778:
    ctx->pc = 0x10B780u;
}
