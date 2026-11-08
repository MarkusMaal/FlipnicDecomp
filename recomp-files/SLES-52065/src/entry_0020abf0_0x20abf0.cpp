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

// Function: entry_0020abf0
// Address: 0x20abf0 - 0x20ac18
void entry_0020abf0_0x20abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020abf0_0x20abf0");
#endif

    switch (ctx->pc) {
        case 0x20abf8u: goto label_20abf8;
        default: break;
    }

    ctx->pc = 0x20abf0u;

    // 0x20abf0: 0xc07aed0  jal         func_1EBB40
    ctx->pc = 0x20ABF0u;
    SET_GPR_U32(ctx, 31, 0x20ABF8u);
    ctx->pc = 0x1EBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB40u, 0x20ABF0u, 0x20ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABF8u;
label_20abf8:
    // 0x20abf8: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x20abf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x20abfc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ac00: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x20ac00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ac04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AC18u;
            return;
        }
    }
    ctx->pc = 0x20AC10u;
    // 0x20ac10: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x20ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20ac14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20ac14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x20ac18u;
}
