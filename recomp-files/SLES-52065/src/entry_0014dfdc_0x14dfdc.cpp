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

// Function: entry_0014dfdc
// Address: 0x14dfdc - 0x14e030
void entry_0014dfdc_0x14dfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dfdc_0x14dfdc");
#endif

    ctx->pc = 0x14dfdcu;

    // 0x14dfdc: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x14dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14dfe0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x14dfe4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14dfe8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x14dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x14dfec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14dff0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dff4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14dff8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x14dff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14dffc: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x14dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x14e000: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x14e000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e004: 0x0  nop
    ctx->pc = 0x14e004u;
    // NOP
    // 0x14e008: 0x0  nop
    ctx->pc = 0x14e008u;
    // NOP
    // 0x14e00c: 0x1010  mfhi        $v0
    ctx->pc = 0x14e00cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e010: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x14e010u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x14e014: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14e014u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x14e018: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14e018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e01c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E01Cu;
    {
        const bool branch_taken_0x14e01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E01Cu;
        // 0x14e020: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e01c) {
            ctx->pc = 0x14E04Cu;
            return;
        }
    }
    ctx->pc = 0x14E024u;
    // 0x14e024: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x14e024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e028: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E028u;
    {
        const bool branch_taken_0x14e028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E028u;
        // 0x14e02c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e028) {
            ctx->pc = 0x14E04Cu;
            return;
        }
    }
    ctx->pc = 0x14E030u;
}
