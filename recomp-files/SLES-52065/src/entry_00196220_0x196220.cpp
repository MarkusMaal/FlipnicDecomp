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

// Function: entry_00196220
// Address: 0x196220 - 0x1962a4
void entry_00196220_0x196220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196220_0x196220");
#endif

    switch (ctx->pc) {
        case 0x196248u: goto label_196248;
        default: break;
    }

    ctx->pc = 0x196220u;

    // 0x196220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x196224: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x196228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19622c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x196230: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196234: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x196234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19623c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19623cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196240: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x196240u;
    SET_GPR_U32(ctx, 31, 0x196248u);
    ctx->pc = 0x196244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196240u;
    // 0x196244: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x196240u, 0x196248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196248u;
label_196248:
    // 0x196248: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19624c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19624cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x196250: 0x104400f0  beq         $v0, $a0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x196250u;
    {
        const bool branch_taken_0x196250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x196250) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196258u;
    // 0x196258: 0x104300ee  beq         $v0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x196258u;
    {
        const bool branch_taken_0x196258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196258) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x196260u;
    // 0x196260: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196264: 0x104300dc  beq         $v0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x196264u;
    {
        const bool branch_taken_0x196264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196264) {
            ctx->pc = 0x1965D8u;
            return;
        }
    }
    ctx->pc = 0x19626Cu;
    // 0x19626c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196270: 0x104300be  beq         $v0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x196270u;
    {
        const bool branch_taken_0x196270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196270) {
            ctx->pc = 0x19656Cu;
            return;
        }
    }
    ctx->pc = 0x196278u;
    // 0x196278: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19627c: 0x10440077  beq         $v0, $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x19627Cu;
    {
        const bool branch_taken_0x19627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19627c) {
            ctx->pc = 0x19645Cu;
            return;
        }
    }
    ctx->pc = 0x196284u;
    // 0x196284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196288: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x196288u;
    {
        const bool branch_taken_0x196288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196288) {
            ctx->pc = 0x1962D8u;
            return;
        }
    }
    ctx->pc = 0x196290u;
    // 0x196290: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196290u;
    {
        const bool branch_taken_0x196290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196290u;
        // 0x196294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196290) {
            ctx->pc = 0x1962A4u;
            return;
        }
    }
    ctx->pc = 0x196298u;
    // 0x196298: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x196298u;
    {
        const bool branch_taken_0x196298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196298u;
        // 0x19629c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196298) {
            ctx->pc = 0x196618u;
            return;
        }
    }
    ctx->pc = 0x1962A0u;
    // 0x1962a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1962a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1962a4u;
}
