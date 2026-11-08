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

// Function: entry_001a626c
// Address: 0x1a626c - 0x1a62b4
void entry_001a626c_0x1a626c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a626c_0x1a626c");
#endif

    switch (ctx->pc) {
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6280u: goto label_1a6280;
        default: break;
    }

    ctx->pc = 0x1a626cu;

label_1a626c:
    // 0x1a626c: 0xc062114  jal         func_188450
label_1a6270:
    if (ctx->pc == 0x1A6270u) {
        ctx->pc = 0x1A6274u;
        goto label_1a6274;
    }
    ctx->pc = 0x1A626Cu;
    SET_GPR_U32(ctx, 31, 0x1A6274u);
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A626Cu, 0x1A6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6274u;
label_1a6274:
    // 0x1a6274: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6278:
    // 0x1a6278: 0xc062114  jal         func_188450
label_1a627c:
    if (ctx->pc == 0x1A627Cu) {
        ctx->pc = 0x1A627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6278u;
        // 0x1a627c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6280u;
        goto label_1a6280;
    }
    ctx->pc = 0x1A6278u;
    SET_GPR_U32(ctx, 31, 0x1A6280u);
    ctx->pc = 0x1A627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6278u;
    // 0x1a627c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6278u, 0x1A6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6280u;
label_1a6280:
    // 0x1a6280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6284:
    // 0x1a6284: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_1a6288:
    // 0x1a6288: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a628c:
    // 0x1a628c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a6290:
    // 0x1a6290: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x267306a8  addiu       $s3, $s3, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    {
        const bool branch_taken_0x1a6290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x267306a8  addiu       $s3, $s3, 0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6290) {
            ctx->pc = 0x1A64B0u;
            return;
        }
    }
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1a629c:
    // 0x1a629c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a629cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a62a0:
    // 0x1a62a0: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
label_1a62a4:
    // 0x1a62a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a62a8:
    // 0x1a62a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a62ac:
    // 0x1a62ac: 0x400008  jr          $v0
label_1a62b0:
    if (ctx->pc == 0x1A62B0u) {
        ctx->pc = 0x1A62B4u;
        goto label_fallthrough_0x1a62ac;
    }
    ctx->pc = 0x1A62ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a62ac:
    ctx->pc = 0x1A62B4u;
}
