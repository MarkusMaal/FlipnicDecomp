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

// Function: entry_00137ecc
// Address: 0x137ecc - 0x137f18
void entry_00137ecc_0x137ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ecc_0x137ecc");
#endif

    switch (ctx->pc) {
        case 0x137ee8u: goto label_137ee8;
        case 0x137f08u: goto label_137f08;
        default: break;
    }

    ctx->pc = 0x137eccu;

    // 0x137ecc: 0x0  nop
    ctx->pc = 0x137eccu;
    // NOP
    // 0x137ed0: 0x8eb10058  lw          $s1, 0x58($s5)
    ctx->pc = 0x137ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x137ed4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x137ed8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x137edc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x137edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x137ee0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x137EE0u;
    SET_GPR_U32(ctx, 31, 0x137EE8u);
    ctx->pc = 0x137EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EE0u;
    // 0x137ee4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x137EE0u, 0x137EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EE8u;
label_137ee8:
    // 0x137ee8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x137eec: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x137eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x137ef0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x137ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ef8: 0x24a57520  addiu       $a1, $a1, 0x7520
    ctx->pc = 0x137ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29984));
    // 0x137efc: 0x24c67890  addiu       $a2, $a2, 0x7890
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30864));
    // 0x137f00: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x137F00u;
    SET_GPR_U32(ctx, 31, 0x137F08u);
    ctx->pc = 0x137F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F00u;
    // 0x137f04: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x137F00u, 0x137F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F08u;
label_137f08:
    // 0x137f08: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x137f08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x137f0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x137f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x137F10u;
    {
        const bool branch_taken_0x137f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F10u;
        // 0x137f14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f10) {
            ctx->pc = 0x137F44u;
            return;
        }
    }
    ctx->pc = 0x137F18u;
}
