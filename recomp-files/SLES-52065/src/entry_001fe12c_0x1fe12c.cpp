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

// Function: entry_001fe12c
// Address: 0x1fe12c - 0x1fe160
void entry_001fe12c_0x1fe12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe12c_0x1fe12c");
#endif

    switch (ctx->pc) {
        case 0x1fe134u: goto label_1fe134;
        case 0x1fe14cu: goto label_1fe14c;
        default: break;
    }

    ctx->pc = 0x1fe12cu;

label_1fe12c:
    // 0x1fe12c: 0xc07f4fc  jal         func_1FD3F0
label_1fe130:
    if (ctx->pc == 0x1FE130u) {
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE134u;
        goto label_1fe134;
    }
    ctx->pc = 0x1FE12Cu;
    SET_GPR_U32(ctx, 31, 0x1FE134u);
    ctx->pc = 0x1FE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE12Cu;
    // 0x1fe130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE12Cu, 0x1FE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE134u;
label_1fe134:
    // 0x1fe134: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1fe138:
    if (ctx->pc == 0x1FE138u) {
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE13Cu;
        goto label_1fe13c;
    }
    ctx->pc = 0x1FE134u;
    {
        const bool branch_taken_0x1fe134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE134u;
        // 0x1fe138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe134) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
    ctx->pc = 0x1FE13Cu;
label_1fe13c:
    // 0x1fe13c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe140:
    // 0x1fe140: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fe140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fe144:
    // 0x1fe144: 0x2a0f809  jalr        $s5
label_1fe148:
    if (ctx->pc == 0x1FE148u) {
        ctx->pc = 0x1FE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE144u;
        // 0x1fe148: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE14Cu;
        goto label_1fe14c;
    }
    ctx->pc = 0x1FE144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FE14Cu);
        ctx->pc = 0x1FE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE144u;
        // 0x1fe148: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE144u, 0x1FE14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE14Cu;
label_1fe14c:
    // 0x1fe14c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe150:
    // 0x1fe150: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1fe154:
    if (ctx->pc == 0x1FE154u) {
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE158u;
        goto label_1fe158;
    }
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE150u;
            // 0x1fe154: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE160u;
            return;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fe15c:
    if (ctx->pc == 0x1FE15Cu) {
        ctx->pc = 0x1FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE158u;
        // 0x1fe15c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE160u;
        goto label_fallthrough_0x1fe158;
    }
    ctx->pc = 0x1FE158u;
    {
        const bool branch_taken_0x1fe158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE158u;
        // 0x1fe15c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe158) {
            ctx->pc = 0x1FE198u;
            return;
        }
    }
label_fallthrough_0x1fe158:
    ctx->pc = 0x1FE160u;
}
