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

// Function: FUN_0010bcc0
// Address: 0x10bcc0 - 0x10bf68
void FUN_0010bcc0_0x10bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010bcc0_0x10bcc0");
#endif

    switch (ctx->pc) {
        case 0x10bcc0u: goto label_10bcc0;
        case 0x10bcc4u: goto label_10bcc4;
        case 0x10bcc8u: goto label_10bcc8;
        case 0x10bcccu: goto label_10bccc;
        case 0x10bcd0u: goto label_10bcd0;
        case 0x10bcd4u: goto label_10bcd4;
        case 0x10bcd8u: goto label_10bcd8;
        case 0x10bcdcu: goto label_10bcdc;
        case 0x10bce0u: goto label_10bce0;
        case 0x10bce4u: goto label_10bce4;
        case 0x10bce8u: goto label_10bce8;
        case 0x10bcecu: goto label_10bcec;
        case 0x10bcf0u: goto label_10bcf0;
        case 0x10bcf4u: goto label_10bcf4;
        case 0x10bcf8u: goto label_10bcf8;
        case 0x10bcfcu: goto label_10bcfc;
        case 0x10bd00u: goto label_10bd00;
        case 0x10bd04u: goto label_10bd04;
        case 0x10bd08u: goto label_10bd08;
        case 0x10bd0cu: goto label_10bd0c;
        case 0x10bd10u: goto label_10bd10;
        case 0x10bd14u: goto label_10bd14;
        case 0x10bd18u: goto label_10bd18;
        case 0x10bd1cu: goto label_10bd1c;
        case 0x10bd20u: goto label_10bd20;
        case 0x10bd24u: goto label_10bd24;
        case 0x10bd28u: goto label_10bd28;
        case 0x10bd2cu: goto label_10bd2c;
        case 0x10bd30u: goto label_10bd30;
        case 0x10bd34u: goto label_10bd34;
        case 0x10bd38u: goto label_10bd38;
        case 0x10bd3cu: goto label_10bd3c;
        case 0x10bd40u: goto label_10bd40;
        case 0x10bd44u: goto label_10bd44;
        case 0x10bd48u: goto label_10bd48;
        case 0x10bd4cu: goto label_10bd4c;
        case 0x10bd50u: goto label_10bd50;
        case 0x10bd54u: goto label_10bd54;
        case 0x10bd58u: goto label_10bd58;
        case 0x10bd5cu: goto label_10bd5c;
        case 0x10bd60u: goto label_10bd60;
        case 0x10bd64u: goto label_10bd64;
        case 0x10bd68u: goto label_10bd68;
        case 0x10bd6cu: goto label_10bd6c;
        case 0x10bd70u: goto label_10bd70;
        case 0x10bd74u: goto label_10bd74;
        case 0x10bd78u: goto label_10bd78;
        case 0x10bd7cu: goto label_10bd7c;
        case 0x10bd80u: goto label_10bd80;
        case 0x10bd84u: goto label_10bd84;
        case 0x10bd88u: goto label_10bd88;
        case 0x10bd8cu: goto label_10bd8c;
        case 0x10bd90u: goto label_10bd90;
        case 0x10bd94u: goto label_10bd94;
        case 0x10bd98u: goto label_10bd98;
        case 0x10bd9cu: goto label_10bd9c;
        case 0x10bda0u: goto label_10bda0;
        case 0x10bda4u: goto label_10bda4;
        case 0x10bda8u: goto label_10bda8;
        case 0x10bdacu: goto label_10bdac;
        case 0x10bdb0u: goto label_10bdb0;
        case 0x10bdb4u: goto label_10bdb4;
        case 0x10bdb8u: goto label_10bdb8;
        case 0x10bdbcu: goto label_10bdbc;
        case 0x10bdc0u: goto label_10bdc0;
        case 0x10bdc4u: goto label_10bdc4;
        case 0x10bdc8u: goto label_10bdc8;
        case 0x10bdccu: goto label_10bdcc;
        case 0x10bdd0u: goto label_10bdd0;
        case 0x10bdd4u: goto label_10bdd4;
        case 0x10bdd8u: goto label_10bdd8;
        case 0x10bddcu: goto label_10bddc;
        case 0x10bde0u: goto label_10bde0;
        case 0x10bde4u: goto label_10bde4;
        case 0x10bde8u: goto label_10bde8;
        case 0x10bdecu: goto label_10bdec;
        case 0x10bdf0u: goto label_10bdf0;
        case 0x10bdf4u: goto label_10bdf4;
        case 0x10bdf8u: goto label_10bdf8;
        case 0x10bdfcu: goto label_10bdfc;
        case 0x10be00u: goto label_10be00;
        case 0x10be04u: goto label_10be04;
        case 0x10be08u: goto label_10be08;
        case 0x10be0cu: goto label_10be0c;
        case 0x10be10u: goto label_10be10;
        case 0x10be14u: goto label_10be14;
        case 0x10be18u: goto label_10be18;
        case 0x10be1cu: goto label_10be1c;
        case 0x10be20u: goto label_10be20;
        case 0x10be24u: goto label_10be24;
        case 0x10be28u: goto label_10be28;
        case 0x10be2cu: goto label_10be2c;
        case 0x10be30u: goto label_10be30;
        case 0x10be34u: goto label_10be34;
        case 0x10be38u: goto label_10be38;
        case 0x10be3cu: goto label_10be3c;
        case 0x10be40u: goto label_10be40;
        case 0x10be44u: goto label_10be44;
        case 0x10be48u: goto label_10be48;
        case 0x10be4cu: goto label_10be4c;
        case 0x10be50u: goto label_10be50;
        case 0x10be54u: goto label_10be54;
        case 0x10be58u: goto label_10be58;
        case 0x10be5cu: goto label_10be5c;
        case 0x10be60u: goto label_10be60;
        case 0x10be64u: goto label_10be64;
        case 0x10be68u: goto label_10be68;
        case 0x10be6cu: goto label_10be6c;
        case 0x10be70u: goto label_10be70;
        case 0x10be74u: goto label_10be74;
        case 0x10be78u: goto label_10be78;
        case 0x10be7cu: goto label_10be7c;
        case 0x10be80u: goto label_10be80;
        case 0x10be84u: goto label_10be84;
        case 0x10be88u: goto label_10be88;
        case 0x10be8cu: goto label_10be8c;
        case 0x10be90u: goto label_10be90;
        case 0x10be94u: goto label_10be94;
        case 0x10be98u: goto label_10be98;
        case 0x10be9cu: goto label_10be9c;
        case 0x10bea0u: goto label_10bea0;
        case 0x10bea4u: goto label_10bea4;
        case 0x10bea8u: goto label_10bea8;
        case 0x10beacu: goto label_10beac;
        case 0x10beb0u: goto label_10beb0;
        case 0x10beb4u: goto label_10beb4;
        case 0x10beb8u: goto label_10beb8;
        case 0x10bebcu: goto label_10bebc;
        case 0x10bec0u: goto label_10bec0;
        case 0x10bec4u: goto label_10bec4;
        case 0x10bec8u: goto label_10bec8;
        case 0x10beccu: goto label_10becc;
        case 0x10bed0u: goto label_10bed0;
        case 0x10bed4u: goto label_10bed4;
        case 0x10bed8u: goto label_10bed8;
        case 0x10bedcu: goto label_10bedc;
        case 0x10bee0u: goto label_10bee0;
        case 0x10bee4u: goto label_10bee4;
        case 0x10bee8u: goto label_10bee8;
        case 0x10beecu: goto label_10beec;
        case 0x10bef0u: goto label_10bef0;
        case 0x10bef4u: goto label_10bef4;
        case 0x10bef8u: goto label_10bef8;
        case 0x10befcu: goto label_10befc;
        case 0x10bf00u: goto label_10bf00;
        case 0x10bf04u: goto label_10bf04;
        case 0x10bf08u: goto label_10bf08;
        case 0x10bf0cu: goto label_10bf0c;
        case 0x10bf10u: goto label_10bf10;
        case 0x10bf14u: goto label_10bf14;
        case 0x10bf18u: goto label_10bf18;
        case 0x10bf1cu: goto label_10bf1c;
        case 0x10bf20u: goto label_10bf20;
        case 0x10bf24u: goto label_10bf24;
        case 0x10bf28u: goto label_10bf28;
        case 0x10bf2cu: goto label_10bf2c;
        case 0x10bf30u: goto label_10bf30;
        case 0x10bf34u: goto label_10bf34;
        case 0x10bf38u: goto label_10bf38;
        case 0x10bf3cu: goto label_10bf3c;
        case 0x10bf40u: goto label_10bf40;
        case 0x10bf44u: goto label_10bf44;
        case 0x10bf48u: goto label_10bf48;
        case 0x10bf4cu: goto label_10bf4c;
        case 0x10bf50u: goto label_10bf50;
        case 0x10bf54u: goto label_10bf54;
        case 0x10bf58u: goto label_10bf58;
        case 0x10bf5cu: goto label_10bf5c;
        case 0x10bf60u: goto label_10bf60;
        case 0x10bf64u: goto label_10bf64;
        default: break;
    }

    ctx->pc = 0x10bcc0u;

label_10bcc0:
    // 0x10bcc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_10bcc4:
    // 0x10bcc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10bcc8:
    // 0x10bcc8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_10bccc:
    // 0x10bccc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_10bcd0:
    // 0x10bcd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10bcd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10bcd4:
    // 0x10bcd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_10bcd8:
    // 0x10bcd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10bcdc:
    // 0x10bcdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_10bce0:
    // 0x10bce0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x10bce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_10bce4:
    // 0x10bce4: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x10bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_10bce8:
    // 0x10bce8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x10bce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_10bcec:
    // 0x10bcec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_10bcf0:
    if (ctx->pc == 0x10BCF0u) {
        ctx->pc = 0x10BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCECu;
        // 0x10bcf0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BCF4u;
        goto label_10bcf4;
    }
    ctx->pc = 0x10BCECu;
    {
        const bool branch_taken_0x10bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCECu;
        // 0x10bcf0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcec) {
            ctx->pc = 0x10BD1Cu;
            goto label_10bd1c;
        }
    }
    ctx->pc = 0x10BCF4u;
label_10bcf4:
    // 0x10bcf4: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x10bcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_10bcf8:
    // 0x10bcf8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_10bcfc:
    if (ctx->pc == 0x10BCFCu) {
        ctx->pc = 0x10BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCF8u;
        // 0x10bcfc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD00u;
        goto label_10bd00;
    }
    ctx->pc = 0x10BCF8u;
    {
        const bool branch_taken_0x10bcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCF8u;
        // 0x10bcfc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcf8) {
            ctx->pc = 0x10BD20u;
            goto label_10bd20;
        }
    }
    ctx->pc = 0x10BD00u;
label_10bd00:
    // 0x10bd00: 0x8e82231c  lw          $v0, 0x231C($s4)
    ctx->pc = 0x10bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8988)));
label_10bd04:
    // 0x10bd04: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_10bd08:
    if (ctx->pc == 0x10BD08u) {
        ctx->pc = 0x10BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD04u;
        // 0x10bd08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD0Cu;
        goto label_10bd0c;
    }
    ctx->pc = 0x10BD04u;
    {
        const bool branch_taken_0x10bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x10BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD04u;
        // 0x10bd08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd04) {
            ctx->pc = 0x10BD1Cu;
            goto label_10bd1c;
        }
    }
    ctx->pc = 0x10BD0Cu;
label_10bd0c:
    // 0x10bd0c: 0xc055c40  jal         func_157100
label_10bd10:
    if (ctx->pc == 0x10BD10u) {
        ctx->pc = 0x10BD14u;
        goto label_10bd14;
    }
    ctx->pc = 0x10BD0Cu;
    SET_GPR_U32(ctx, 31, 0x10BD14u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x10BD0Cu, 0x10BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD14u;
label_10bd14:
    // 0x10bd14: 0x10000026  b           . + 4 + (0x26 << 2)
label_10bd18:
    if (ctx->pc == 0x10BD18u) {
        ctx->pc = 0x10BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD14u;
        // 0x10bd18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD1Cu;
        goto label_10bd1c;
    }
    ctx->pc = 0x10BD14u;
    {
        const bool branch_taken_0x10bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD14u;
        // 0x10bd18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd14) {
            ctx->pc = 0x10BDB0u;
            goto label_10bdb0;
        }
    }
    ctx->pc = 0x10BD1Cu;
label_10bd1c:
    // 0x10bd1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_10bd20:
    // 0x10bd20: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_10bd24:
    if (ctx->pc == 0x10BD24u) {
        ctx->pc = 0x10BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD20u;
        // 0x10bd24: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD28u;
        goto label_10bd28;
    }
    ctx->pc = 0x10BD20u;
    {
        const bool branch_taken_0x10bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD20u;
        // 0x10bd24: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd20) {
            ctx->pc = 0x10BDA0u;
            goto label_10bda0;
        }
    }
    ctx->pc = 0x10BD28u;
label_10bd28:
    // 0x10bd28: 0x8e82231c  lw          $v0, 0x231C($s4)
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8988)));
label_10bd2c:
    // 0x10bd2c: 0x1053001c  beq         $v0, $s3, . + 4 + (0x1C << 2)
label_10bd30:
    if (ctx->pc == 0x10BD30u) {
        ctx->pc = 0x10BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD2Cu;
        // 0x10bd30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD34u;
        goto label_10bd34;
    }
    ctx->pc = 0x10BD2Cu;
    {
        const bool branch_taken_0x10bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD2Cu;
        // 0x10bd30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd2c) {
            ctx->pc = 0x10BDA0u;
            goto label_10bda0;
        }
    }
    ctx->pc = 0x10BD34u;
label_10bd34:
    // 0x10bd34: 0xc059990  jal         func_166640
label_10bd38:
    if (ctx->pc == 0x10BD38u) {
        ctx->pc = 0x10BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD34u;
        // 0x10bd38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD3Cu;
        goto label_10bd3c;
    }
    ctx->pc = 0x10BD34u;
    SET_GPR_U32(ctx, 31, 0x10BD3Cu);
    ctx->pc = 0x10BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD34u;
    // 0x10bd38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x10BD34u, 0x10BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD3Cu;
label_10bd3c:
    // 0x10bd3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bd40:
    // 0x10bd40: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_10bd44:
    if (ctx->pc == 0x10BD44u) {
        ctx->pc = 0x10BD48u;
        goto label_10bd48;
    }
    ctx->pc = 0x10BD40u;
    {
        const bool branch_taken_0x10bd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bd40) {
            ctx->pc = 0x10BDACu;
            goto label_10bdac;
        }
    }
    ctx->pc = 0x10BD48u;
label_10bd48:
    // 0x10bd48: 0x868243f0  lh          $v0, 0x43F0($s4)
    ctx->pc = 0x10bd48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 17392)));
label_10bd4c:
    // 0x10bd4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10bd50:
    // 0x10bd50: 0x2484e308  addiu       $a0, $a0, -0x1CF8
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959880));
label_10bd54:
    // 0x10bd54: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_10bd58:
    // 0x10bd58: 0xc046458  jal         func_119160
label_10bd5c:
    if (ctx->pc == 0x10BD5Cu) {
        ctx->pc = 0x10BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD58u;
        // 0x10bd5c: 0xa68243f0  sh          $v0, 0x43F0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 17392), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD60u;
        goto label_10bd60;
    }
    ctx->pc = 0x10BD58u;
    SET_GPR_U32(ctx, 31, 0x10BD60u);
    ctx->pc = 0x10BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD58u;
    // 0x10bd5c: 0xa68243f0  sh          $v0, 0x43F0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 17392), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10BD58u, 0x10BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD60u;
label_10bd60:
    // 0x10bd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10bd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bd64:
    // 0x10bd64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bd68:
    // 0x10bd68: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_10bd6c:
    // 0x10bd6c: 0x26660370  addiu       $a2, $s3, 0x370
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
label_10bd70:
    // 0x10bd70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10bd74:
    // 0x10bd74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10bd78:
    // 0x10bd78: 0xc059a68  jal         func_1669A0
label_10bd7c:
    if (ctx->pc == 0x10BD7Cu) {
        ctx->pc = 0x10BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD78u;
        // 0x10bd7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD80u;
        goto label_10bd80;
    }
    ctx->pc = 0x10BD78u;
    SET_GPR_U32(ctx, 31, 0x10BD80u);
    ctx->pc = 0x10BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD78u;
    // 0x10bd7c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x10BD78u, 0x10BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD80u;
label_10bd80:
    // 0x10bd80: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10bd84:
    // 0x10bd84: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x10bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_10bd88:
    // 0x10bd88: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10bd8c:
    // 0x10bd8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bd90:
    // 0x10bd90: 0xc0465f0  jal         func_1197C0
label_10bd94:
    if (ctx->pc == 0x10BD94u) {
        ctx->pc = 0x10BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD90u;
        // 0x10bd94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BD98u;
        goto label_10bd98;
    }
    ctx->pc = 0x10BD90u;
    SET_GPR_U32(ctx, 31, 0x10BD98u);
    ctx->pc = 0x10BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD90u;
    // 0x10bd94: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10BD90u, 0x10BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD98u;
label_10bd98:
    // 0x10bd98: 0x1000006a  b           . + 4 + (0x6A << 2)
label_10bd9c:
    if (ctx->pc == 0x10BD9Cu) {
        ctx->pc = 0x10BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD98u;
        // 0x10bd9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BDA0u;
        goto label_10bda0;
    }
    ctx->pc = 0x10BD98u;
    {
        const bool branch_taken_0x10bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD98u;
        // 0x10bd9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd98) {
            ctx->pc = 0x10BF44u;
            goto label_10bf44;
        }
    }
    ctx->pc = 0x10BDA0u;
label_10bda0:
    // 0x10bda0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_10bda4:
    if (ctx->pc == 0x10BDA4u) {
        ctx->pc = 0x10BDA8u;
        goto label_10bda8;
    }
    ctx->pc = 0x10BDA0u;
    {
        const bool branch_taken_0x10bda0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bda0) {
            ctx->pc = 0x10BDACu;
            goto label_10bdac;
        }
    }
    ctx->pc = 0x10BDA8u;
label_10bda8:
    // 0x10bda8: 0xae93231c  sw          $s3, 0x231C($s4)
    ctx->pc = 0x10bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8988), GPR_U32(ctx, 19));
label_10bdac:
    // 0x10bdac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10bdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bdb0:
    // 0x10bdb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10bdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bdb4:
    // 0x10bdb4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_10bdb8:
    // 0x10bdb8: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_10bdbc:
    // 0x10bdbc: 0x8c420650  lw          $v0, 0x650($v0)
    ctx->pc = 0x10bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_10bdc0:
    // 0x10bdc0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_10bdc4:
    if (ctx->pc == 0x10BDC4u) {
        ctx->pc = 0x10BDC8u;
        goto label_10bdc8;
    }
    ctx->pc = 0x10BDC0u;
    {
        const bool branch_taken_0x10bdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bdc0) {
            ctx->pc = 0x10BE68u;
            goto label_10be68;
        }
    }
    ctx->pc = 0x10BDC8u;
label_10bdc8:
    // 0x10bdc8: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bdcc:
    // 0x10bdcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bdd0:
    // 0x10bdd0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10bdd4:
    // 0x10bdd4: 0x320f809  jalr        $t9
label_10bdd8:
    if (ctx->pc == 0x10BDD8u) {
        ctx->pc = 0x10BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDD4u;
        // 0x10bdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BDDCu;
        goto label_10bddc;
    }
    ctx->pc = 0x10BDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BDDCu);
        ctx->pc = 0x10BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDD4u;
        // 0x10bdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BDD4u, 0x10BDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BDDCu;
label_10bddc:
    // 0x10bddc: 0xc66c01c0  lwc1        $f12, 0x1C0($s3)
    ctx->pc = 0x10bddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10bde0:
    // 0x10bde0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10bde4:
    // 0x10bde4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10bde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10bde8:
    // 0x10bde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bdec:
    // 0x10bdec: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x10bdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_10bdf0:
    // 0x10bdf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10bdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bdf4:
    // 0x10bdf4: 0x26070300  addiu       $a3, $s0, 0x300
    ctx->pc = 0x10bdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_10bdf8:
    // 0x10bdf8: 0x26680290  addiu       $t0, $s3, 0x290
    ctx->pc = 0x10bdf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_10bdfc:
    // 0x10bdfc: 0xc055160  jal         func_154580
label_10be00:
    if (ctx->pc == 0x10BE00u) {
        ctx->pc = 0x10BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDFCu;
        // 0x10be00: 0x26090290  addiu       $t1, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE04u;
        goto label_10be04;
    }
    ctx->pc = 0x10BDFCu;
    SET_GPR_U32(ctx, 31, 0x10BE04u);
    ctx->pc = 0x10BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDFCu;
    // 0x10be00: 0x26090290  addiu       $t1, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154580u, 0x10BDFCu, 0x10BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE04u;
label_10be04:
    // 0x10be04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10be04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10be08:
    // 0x10be08: 0x0  nop
    ctx->pc = 0x10be08u;
    // NOP
label_10be0c:
    // 0x10be0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10be0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10be10:
    // 0x10be10: 0x0  nop
    ctx->pc = 0x10be10u;
    // NOP
label_10be14:
    // 0x10be14: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_10be18:
    if (ctx->pc == 0x10BE18u) {
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE14u;
        // 0x10be18: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE1Cu;
        goto label_10be1c;
    }
    ctx->pc = 0x10BE14u;
    {
        const bool branch_taken_0x10be14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE14u;
        // 0x10be18: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be14) {
            ctx->pc = 0x10BE4Cu;
            goto label_10be4c;
        }
    }
    ctx->pc = 0x10BE1Cu;
label_10be1c:
    // 0x10be1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be20:
    // 0x10be20: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10be20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10be24:
    // 0x10be24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10be28:
    // 0x10be28: 0xc056194  jal         func_158650
label_10be2c:
    if (ctx->pc == 0x10BE2Cu) {
        ctx->pc = 0x10BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE28u;
        // 0x10be2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE30u;
        goto label_10be30;
    }
    ctx->pc = 0x10BE28u;
    SET_GPR_U32(ctx, 31, 0x10BE30u);
    ctx->pc = 0x10BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE28u;
    // 0x10be2c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10BE28u, 0x10BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE30u;
label_10be30:
    // 0x10be30: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10be34:
    // 0x10be34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10be34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10be38:
    // 0x10be38: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10be38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10be3c:
    // 0x10be3c: 0xc056194  jal         func_158650
label_10be40:
    if (ctx->pc == 0x10BE40u) {
        ctx->pc = 0x10BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE3Cu;
        // 0x10be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE44u;
        goto label_10be44;
    }
    ctx->pc = 0x10BE3Cu;
    SET_GPR_U32(ctx, 31, 0x10BE44u);
    ctx->pc = 0x10BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE3Cu;
    // 0x10be40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10BE3Cu, 0x10BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE44u;
label_10be44:
    // 0x10be44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10be48:
    // 0x10be48: 0xae0203d0  sw          $v0, 0x3D0($s0)
    ctx->pc = 0x10be48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 2));
label_10be4c:
    // 0x10be4c: 0x0  nop
    ctx->pc = 0x10be4cu;
    // NOP
label_10be50:
    // 0x10be50: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10be50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10be54:
    // 0x10be54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10be54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10be58:
    // 0x10be58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10be5c:
    // 0x10be5c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10be5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10be60:
    // 0x10be60: 0x320f809  jalr        $t9
label_10be64:
    if (ctx->pc == 0x10BE64u) {
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE68u;
        goto label_10be68;
    }
    ctx->pc = 0x10BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BE68u);
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE60u, 0x10BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BE68u;
label_10be68:
    // 0x10be68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10be6c:
    // 0x10be6c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x10be6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10be70:
    // 0x10be70: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_10be74:
    if (ctx->pc == 0x10BE74u) {
        ctx->pc = 0x10BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE70u;
        // 0x10be74: 0x26520410  addiu       $s2, $s2, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE78u;
        goto label_10be78;
    }
    ctx->pc = 0x10BE70u;
    {
        const bool branch_taken_0x10be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE70u;
        // 0x10be74: 0x26520410  addiu       $s2, $s2, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be70) {
            ctx->pc = 0x10BDB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bdb4;
        }
    }
    ctx->pc = 0x10BE78u;
label_10be78:
    // 0x10be78: 0x8e8343e0  lw          $v1, 0x43E0($s4)
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17376)));
label_10be7c:
    // 0x10be7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10be80:
    // 0x10be80: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_10be84:
    if (ctx->pc == 0x10BE84u) {
        ctx->pc = 0x10BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE80u;
        // 0x10be84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE88u;
        goto label_10be88;
    }
    ctx->pc = 0x10BE80u;
    {
        const bool branch_taken_0x10be80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE80u;
        // 0x10be84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be80) {
            ctx->pc = 0x10BF44u;
            goto label_10bf44;
        }
    }
    ctx->pc = 0x10BE88u;
label_10be88:
    // 0x10be88: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10be8c:
    // 0x10be8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10be90:
    // 0x10be90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be94:
    // 0x10be94: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10be98:
    // 0x10be98: 0x320f809  jalr        $t9
label_10be9c:
    if (ctx->pc == 0x10BE9Cu) {
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEA0u;
        goto label_10bea0;
    }
    ctx->pc = 0x10BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BEA0u);
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE98u, 0x10BEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BEA0u;
label_10bea0:
    // 0x10bea0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x10bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_10bea4:
    // 0x10bea4: 0x8e8343e4  lw          $v1, 0x43E4($s4)
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17380)));
label_10bea8:
    // 0x10bea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10bea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10beac:
    // 0x10beac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10beb0:
    // 0x10beb0: 0xc66c01c0  lwc1        $f12, 0x1C0($s3)
    ctx->pc = 0x10beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10beb4:
    // 0x10beb4: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x10beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_10beb8:
    // 0x10beb8: 0x8e8243d0  lw          $v0, 0x43D0($s4)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17360)));
label_10bebc:
    // 0x10bebc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10bec0:
    // 0x10bec0: 0xc054e18  jal         func_153860
label_10bec4:
    if (ctx->pc == 0x10BEC4u) {
        ctx->pc = 0x10BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC0u;
        // 0x10bec4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEC8u;
        goto label_10bec8;
    }
    ctx->pc = 0x10BEC0u;
    SET_GPR_U32(ctx, 31, 0x10BEC8u);
    ctx->pc = 0x10BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEC0u;
    // 0x10bec4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x10BEC0u, 0x10BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEC8u;
label_10bec8:
    // 0x10bec8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10bec8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10becc:
    // 0x10becc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10beccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10bed0:
    // 0x10bed0: 0x0  nop
    ctx->pc = 0x10bed0u;
    // NOP
label_10bed4:
    // 0x10bed4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10bed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10bed8:
    // 0x10bed8: 0x0  nop
    ctx->pc = 0x10bed8u;
    // NOP
label_10bedc:
    // 0x10bedc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_10bee0:
    if (ctx->pc == 0x10BEE0u) {
        ctx->pc = 0x10BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEDCu;
        // 0x10bee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEE4u;
        goto label_10bee4;
    }
    ctx->pc = 0x10BEDCu;
    {
        const bool branch_taken_0x10bedc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEDCu;
        // 0x10bee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bedc) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BEE4u;
label_10bee4:
    // 0x10bee4: 0xc055c40  jal         func_157100
label_10bee8:
    if (ctx->pc == 0x10BEE8u) {
        ctx->pc = 0x10BEECu;
        goto label_10beec;
    }
    ctx->pc = 0x10BEE4u;
    SET_GPR_U32(ctx, 31, 0x10BEECu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x10BEE4u, 0x10BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEECu;
label_10beec:
    // 0x10beec: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bef0:
    // 0x10bef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bef4:
    // 0x10bef4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10bef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10bef8:
    // 0x10bef8: 0x320f809  jalr        $t9
label_10befc:
    if (ctx->pc == 0x10BEFCu) {
        ctx->pc = 0x10BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEF8u;
        // 0x10befc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF00u;
        goto label_10bf00;
    }
    ctx->pc = 0x10BEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BF00u);
        ctx->pc = 0x10BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEF8u;
        // 0x10befc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BEF8u, 0x10BF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BF00u;
label_10bf00:
    // 0x10bf00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10bf04:
    // 0x10bf04: 0xae8243e0  sw          $v0, 0x43E0($s4)
    ctx->pc = 0x10bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17376), GPR_U32(ctx, 2));
label_10bf08:
    // 0x10bf08: 0xae93231c  sw          $s3, 0x231C($s4)
    ctx->pc = 0x10bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8988), GPR_U32(ctx, 19));
label_10bf0c:
    // 0x10bf0c: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10bf0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bf10:
    // 0x10bf10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bf14:
    // 0x10bf14: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10bf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10bf18:
    // 0x10bf18: 0x320f809  jalr        $t9
label_10bf1c:
    if (ctx->pc == 0x10BF1Cu) {
        ctx->pc = 0x10BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF18u;
        // 0x10bf1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF20u;
        goto label_10bf20;
    }
    ctx->pc = 0x10BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BF20u);
        ctx->pc = 0x10BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF18u;
        // 0x10bf1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF18u, 0x10BF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BF20u;
label_10bf20:
    // 0x10bf20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10bf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10bf24:
    // 0x10bf24: 0x0  nop
    ctx->pc = 0x10bf24u;
    // NOP
label_10bf28:
    // 0x10bf28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10bf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10bf2c:
    // 0x10bf2c: 0x0  nop
    ctx->pc = 0x10bf2cu;
    // NOP
label_10bf30:
    // 0x10bf30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_10bf34:
    if (ctx->pc == 0x10BF34u) {
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF30u;
        // 0x10bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF38u;
        goto label_10bf38;
    }
    ctx->pc = 0x10BF30u;
    {
        const bool branch_taken_0x10bf30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF30u;
        // 0x10bf34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf30) {
            ctx->pc = 0x10BF40u;
            goto label_10bf40;
        }
    }
    ctx->pc = 0x10BF38u;
label_10bf38:
    // 0x10bf38: 0x10000003  b           . + 4 + (0x3 << 2)
label_10bf3c:
    if (ctx->pc == 0x10BF3Cu) {
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF38u;
        // 0x10bf3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF40u;
        goto label_10bf40;
    }
    ctx->pc = 0x10BF38u;
    {
        const bool branch_taken_0x10bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF38u;
        // 0x10bf3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf38) {
            ctx->pc = 0x10BF48u;
            goto label_10bf48;
        }
    }
    ctx->pc = 0x10BF40u;
label_10bf40:
    // 0x10bf40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10bf44:
    // 0x10bf44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10bf48:
    // 0x10bf48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10bf4c:
    // 0x10bf4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10bf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10bf50:
    // 0x10bf50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10bf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10bf54:
    // 0x10bf54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10bf54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10bf58:
    // 0x10bf58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10bf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bf5c:
    // 0x10bf5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10bf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bf60:
    // 0x10bf60: 0x3e00008  jr          $ra
label_10bf64:
    if (ctx->pc == 0x10BF64u) {
        ctx->pc = 0x10BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF60u;
        // 0x10bf64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF68u;
        goto label_fallthrough_0x10bf60;
    }
    ctx->pc = 0x10BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF60u;
        // 0x10bf64: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bf60:
    ctx->pc = 0x10BF68u;
}
