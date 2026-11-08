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

// Function: entry_002029e4
// Address: 0x2029e4 - 0x202a4c
void entry_002029e4_0x2029e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002029e4_0x2029e4");
#endif

    switch (ctx->pc) {
        case 0x202a04u: goto label_202a04;
        case 0x202a14u: goto label_202a14;
        case 0x202a28u: goto label_202a28;
        case 0x202a34u: goto label_202a34;
        case 0x202a44u: goto label_202a44;
        default: break;
    }

    ctx->pc = 0x2029e4u;

    // 0x2029e4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2029e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2029e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2029e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2029ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f0: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x2029f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2029f4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2029f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2029f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029fc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2029FCu;
    SET_GPR_U32(ctx, 31, 0x202A04u);
    ctx->pc = 0x202A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029FCu;
    // 0x202a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2029FCu, 0x202A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a0c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202A0Cu;
    SET_GPR_U32(ctx, 31, 0x202A14u);
    ctx->pc = 0x202A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A0Cu;
    // 0x202a10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202A0Cu, 0x202A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A14u;
label_202a14:
    // 0x202a14: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202A14u;
    {
        const bool branch_taken_0x202a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A14u;
        // 0x202a18: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a14) {
            ctx->pc = 0x202A88u;
            return;
        }
    }
    ctx->pc = 0x202A1Cu;
    // 0x202a1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x202a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a20: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202A20u;
    SET_GPR_U32(ctx, 31, 0x202A28u);
    ctx->pc = 0x202A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A20u;
    // 0x202a24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202A20u, 0x202A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A28u;
label_202a28:
    // 0x202a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a2c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202A2Cu;
    SET_GPR_U32(ctx, 31, 0x202A34u);
    ctx->pc = 0x202A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A2Cu;
    // 0x202a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202A2Cu, 0x202A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A34u;
label_202a34:
    // 0x202a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a3c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202A3Cu;
    SET_GPR_U32(ctx, 31, 0x202A44u);
    ctx->pc = 0x202A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A3Cu;
    // 0x202a40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202A3Cu, 0x202A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A44u;
label_202a44:
    // 0x202a44: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202A44u;
    {
        const bool branch_taken_0x202a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A44u;
        // 0x202a48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a44) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202A4Cu;
}
