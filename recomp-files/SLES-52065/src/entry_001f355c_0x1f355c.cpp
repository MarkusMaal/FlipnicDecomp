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

// Function: entry_001f355c
// Address: 0x1f355c - 0x1f35cc
void entry_001f355c_0x1f355c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f355c_0x1f355c");
#endif

    switch (ctx->pc) {
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f35b8u: goto label_1f35b8;
        default: break;
    }

    ctx->pc = 0x1f355cu;

    // 0x1f355c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f355cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3560: 0x2451fb88  addiu       $s1, $v0, -0x478
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x1f3564: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1f3564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1f3568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f356c: 0xc080804  jal         func_202010
    ctx->pc = 0x1F356Cu;
    SET_GPR_U32(ctx, 31, 0x1F3574u);
    ctx->pc = 0x1F3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F356Cu;
    // 0x1f3570: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F356Cu, 0x1F3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3574u;
label_1f3574:
    // 0x1f3574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f3574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3578: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1f3578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f357c: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1f357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1f3580: 0xc080804  jal         func_202010
    ctx->pc = 0x1F3580u;
    SET_GPR_U32(ctx, 31, 0x1F3588u);
    ctx->pc = 0x1F3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3580u;
    // 0x1f3584: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F3580u, 0x1F3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3588u;
label_1f3588:
    // 0x1f3588: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f358c: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1f358cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3590: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3594: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f3594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f3598: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f3598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f359c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f35a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a4: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f35a8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f35a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35ac: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f35b0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F35B0u;
    SET_GPR_U32(ctx, 31, 0x1F35B8u);
    ctx->pc = 0x1F35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35B0u;
    // 0x1f35b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F35B0u, 0x1F35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35B8u;
label_1f35b8:
    // 0x1f35b8: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35B8u;
    {
        const bool branch_taken_0x1f35b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f35b8) {
            ctx->pc = 0x1F35BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35B8u;
            // 0x1f35bc: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F35CCu;
            return;
        }
    }
    ctx->pc = 0x1F35C0u;
    // 0x1f35c0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f35c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F35C4u;
    {
        const bool branch_taken_0x1f35c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35C4u;
        // 0x1f35c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35c4) {
            ctx->pc = 0x1F35ECu;
            return;
        }
    }
    ctx->pc = 0x1F35CCu;
}
