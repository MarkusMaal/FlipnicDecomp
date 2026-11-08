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

// Function: entry_001f820c
// Address: 0x1f820c - 0x1f8264
void entry_001f820c_0x1f820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f820c_0x1f820c");
#endif

    switch (ctx->pc) {
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8250u: goto label_1f8250;
        default: break;
    }

    ctx->pc = 0x1f820cu;

    // 0x1f820c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f8210: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F8210u;
    {
        const bool branch_taken_0x1f8210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8210u;
        // 0x1f8214: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8210) {
            ctx->pc = 0x1F81A0u;
            return;
        }
    }
    ctx->pc = 0x1F8218u;
    // 0x1f8218: 0x26912bc0  addiu       $s1, $s4, 0x2BC0
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 11200));
    // 0x1f821c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f821cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8220: 0x26c71680  addiu       $a3, $s6, 0x1680
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 5760));
    // 0x1f8224: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f8228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f822c: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1f822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1f8230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8234: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8238: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1f8238u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f823c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F823Cu;
    SET_GPR_U32(ctx, 31, 0x1F8244u);
    ctx->pc = 0x1F8240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F823Cu;
    // 0x1f8240: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F823Cu, 0x1F8244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x8ea4d6bc  lw          $a0, -0x2944($s5)
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    // 0x1f8248: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8248u;
    SET_GPR_U32(ctx, 31, 0x1F8250u);
    ctx->pc = 0x1F824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8248u;
    // 0x1f824c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8248u, 0x1F8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8250u;
label_1f8250:
    // 0x1f8250: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8250u;
    {
        const bool branch_taken_0x1f8250 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1f8250) {
            ctx->pc = 0x1F8254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8250u;
            // 0x1f8254: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8264u;
            return;
        }
    }
    ctx->pc = 0x1F8258u;
    // 0x1f8258: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1f8258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x1f825c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F825Cu;
    {
        const bool branch_taken_0x1f825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F825Cu;
        // 0x1f8260: 0x2602ff9c  addiu       $v0, $s0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f825c) {
            ctx->pc = 0x1F82ACu;
            return;
        }
    }
    ctx->pc = 0x1F8264u;
}
