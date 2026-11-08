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

// Function: entry_001b0e38
// Address: 0x1b0e38 - 0x1b0eac
void entry_001b0e38_0x1b0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e38_0x1b0e38");
#endif

    switch (ctx->pc) {
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0ea4u: goto label_1b0ea4;
        default: break;
    }

    ctx->pc = 0x1b0e38u;

    // 0x1b0e38: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B0E38u;
    SET_GPR_U32(ctx, 31, 0x1B0E40u);
    ctx->pc = 0x1B0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E38u;
    // 0x1b0e3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0E38u, 0x1B0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E40u;
label_1b0e40:
    // 0x1b0e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0e44: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b0e48: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x1b0e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b0e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e50: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x1b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    // 0x1b0e54: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b0e58: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b0e5c: 0x24067d00  addiu       $a2, $zero, 0x7D00
    ctx->pc = 0x1b0e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    // 0x1b0e60: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
    // 0x1b0e64: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b0e68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0e6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e70: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B0E70u;
    SET_GPR_U32(ctx, 31, 0x1B0E78u);
    ctx->pc = 0x1B0E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E70u;
    // 0x1b0e74: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0E70u, 0x1B0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E78u;
label_1b0e78:
    // 0x1b0e78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0e7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b0e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b0e80: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0e84: 0x8c4628e4  lw          $a2, 0x28E4($v0)
    ctx->pc = 0x1b0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10468)));
    // 0x1b0e88: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B0E88u;
    SET_GPR_U32(ctx, 31, 0x1B0E90u);
    ctx->pc = 0x1B0E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E88u;
    // 0x1b0e8c: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B0E88u, 0x1B0E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E90u;
label_1b0e90:
    // 0x1b0e90: 0x8e920118  lw          $s2, 0x118($s4)
    ctx->pc = 0x1b0e90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x1b0e94: 0x24117dc0  addiu       $s1, $zero, 0x7DC0
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32192));
    // 0x1b0e98: 0x8e95011c  lw          $s5, 0x11C($s4)
    ctx->pc = 0x1b0e98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x1b0e9c: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x1B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0EA4u);
    ctx->pc = 0x1B0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E9Cu;
    // 0x1b0ea0: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B0E9Cu, 0x1B0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1B0EA4u;
    {
        const bool branch_taken_0x1b0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ea4) {
            ctx->pc = 0x1B1024u;
            return;
        }
    }
    ctx->pc = 0x1B0EACu;
}
