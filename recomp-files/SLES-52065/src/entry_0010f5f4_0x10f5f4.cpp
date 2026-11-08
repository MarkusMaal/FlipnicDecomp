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

// Function: entry_0010f5f4
// Address: 0x10f5f4 - 0x10f65c
void entry_0010f5f4_0x10f5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f5f4_0x10f5f4");
#endif

    switch (ctx->pc) {
        case 0x10f5fcu: goto label_10f5fc;
        case 0x10f63cu: goto label_10f63c;
        case 0x10f658u: goto label_10f658;
        default: break;
    }

    ctx->pc = 0x10f5f4u;

    // 0x10f5f4: 0xc059748  jal         func_165D20
    ctx->pc = 0x10F5F4u;
    SET_GPR_U32(ctx, 31, 0x10F5FCu);
    ctx->pc = 0x165D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D20u, 0x10F5F4u, 0x10F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5FCu;
label_10f5fc:
    // 0x10f5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f604: 0x16020017  bne         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10F604u;
    {
        const bool branch_taken_0x10f604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f604) {
            ctx->pc = 0x10F664u;
            return;
        }
    }
    ctx->pc = 0x10F60Cu;
    // 0x10f60c: 0x92420224  lbu         $v0, 0x224($s2)
    ctx->pc = 0x10f60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x10f610: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x10f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x10f614: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f618: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10F618u;
    {
        const bool branch_taken_0x10f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F618u;
        // 0x10f61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f618) {
            ctx->pc = 0x10F65Cu;
            return;
        }
    }
    ctx->pc = 0x10F620u;
    // 0x10f620: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x10f624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10f624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f628: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x10f62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10f630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f634: 0xc059a68  jal         func_1669A0
    ctx->pc = 0x10F634u;
    SET_GPR_U32(ctx, 31, 0x10F63Cu);
    ctx->pc = 0x10F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F634u;
    // 0x10f638: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x10F634u, 0x10F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F63Cu;
label_10f63c:
    // 0x10f63c: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x10f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
    // 0x10f640: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10f640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10f644: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10f648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f64c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10f650: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10F650u;
    SET_GPR_U32(ctx, 31, 0x10F658u);
    ctx->pc = 0x10F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F650u;
    // 0x10f654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10F650u, 0x10F658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F658u;
label_10f658:
    // 0x10f658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f65cu;
}
