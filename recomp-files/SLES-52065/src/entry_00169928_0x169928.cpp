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

// Function: entry_00169928
// Address: 0x169928 - 0x16996c
void entry_00169928_0x169928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169928_0x169928");
#endif

    switch (ctx->pc) {
        case 0x169934u: goto label_169934;
        case 0x169950u: goto label_169950;
        case 0x169968u: goto label_169968;
        default: break;
    }

    ctx->pc = 0x169928u;

label_169928:
    // 0x169928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16992c:
    // 0x16992c: 0xc05a680  jal         func_169A00
label_169930:
    if (ctx->pc == 0x169930u) {
        ctx->pc = 0x169930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16992Cu;
        // 0x169930: 0xae000228  sw          $zero, 0x228($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169934u;
        goto label_169934;
    }
    ctx->pc = 0x16992Cu;
    SET_GPR_U32(ctx, 31, 0x169934u);
    ctx->pc = 0x169930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16992Cu;
    // 0x169930: 0xae000228  sw          $zero, 0x228($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A00u, 0x16992Cu, 0x169934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169934u;
label_169934:
    // 0x169934: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_169938:
    if (ctx->pc == 0x169938u) {
        ctx->pc = 0x16993Cu;
        goto label_16993c;
    }
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169934) {
            ctx->pc = 0x16996Cu;
            return;
        }
    }
    ctx->pc = 0x16993Cu;
label_16993c:
    // 0x16993c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169940:
    // 0x169940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169944:
    // 0x169944: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169948:
    // 0x169948: 0x320f809  jalr        $t9
label_16994c:
    if (ctx->pc == 0x16994Cu) {
        ctx->pc = 0x16994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169948u;
        // 0x16994c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169950u;
        goto label_169950;
    }
    ctx->pc = 0x169948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169950u);
        ctx->pc = 0x16994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169948u;
        // 0x16994c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169948u, 0x169950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169950u;
label_169950:
    // 0x169950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_169954:
    // 0x169954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169958:
    // 0x169958: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16995c:
    // 0x16995c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169960:
    // 0x169960: 0xc0425a4  jal         func_109690
label_169964:
    if (ctx->pc == 0x169964u) {
        ctx->pc = 0x169964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169960u;
        // 0x169964: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169968u;
        goto label_169968;
    }
    ctx->pc = 0x169960u;
    SET_GPR_U32(ctx, 31, 0x169968u);
    ctx->pc = 0x169964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169960u;
    // 0x169964: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169960u, 0x169968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0xa2000222  sb          $zero, 0x222($s0)
    ctx->pc = 0x169968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x16996cu;
}
