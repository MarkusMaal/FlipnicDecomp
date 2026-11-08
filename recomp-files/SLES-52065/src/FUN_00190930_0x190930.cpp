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

// Function: FUN_00190930
// Address: 0x190930 - 0x1909d4
void FUN_00190930_0x190930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190930_0x190930");
#endif

    switch (ctx->pc) {
        case 0x190930u: goto label_190930;
        case 0x190934u: goto label_190934;
        case 0x190938u: goto label_190938;
        case 0x19093cu: goto label_19093c;
        case 0x190940u: goto label_190940;
        case 0x190944u: goto label_190944;
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        default: break;
    }

    ctx->pc = 0x190930u;

label_190930:
    // 0x190930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190934:
    // 0x190934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_190938:
    // 0x190938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19093c:
    // 0x19093c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_190940:
    // 0x190940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190944:
    // 0x190944: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_190948:
    if (ctx->pc == 0x190948u) {
        ctx->pc = 0x190948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190944u;
        // 0x190948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19094Cu;
        goto label_19094c;
    }
    ctx->pc = 0x190944u;
    {
        const bool branch_taken_0x190944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190944u;
        // 0x190948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190944) {
            ctx->pc = 0x1909BCu;
            goto label_1909bc;
        }
    }
    ctx->pc = 0x19094Cu;
label_19094c:
    // 0x19094c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19094cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_190950:
    // 0x190950: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_190954:
    // 0x190954: 0x2463b210  addiu       $v1, $v1, -0x4DF0
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947344));
label_190958:
    // 0x190958: 0x2442b264  addiu       $v0, $v0, -0x4D9C
    ctx->pc = 0x190958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947428));
label_19095c:
    // 0x19095c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19095cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_190960:
    // 0x190960: 0xae220444  sw          $v0, 0x444($s1)
    ctx->pc = 0x190960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 2));
label_190964:
    // 0x190964: 0x8e240450  lw          $a0, 0x450($s1)
    ctx->pc = 0x190964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
label_190968:
    // 0x190968: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19096c:
    if (ctx->pc == 0x19096Cu) {
        ctx->pc = 0x190970u;
        goto label_190970;
    }
    ctx->pc = 0x190968u;
    {
        const bool branch_taken_0x190968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190968) {
            ctx->pc = 0x190980u;
            goto label_190980;
        }
    }
    ctx->pc = 0x190970u;
label_190970:
    // 0x190970: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x190970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_190974:
    // 0x190974: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_190978:
    // 0x190978: 0x320f809  jalr        $t9
label_19097c:
    if (ctx->pc == 0x19097Cu) {
        ctx->pc = 0x19097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190978u;
        // 0x19097c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190980u;
        goto label_190980;
    }
    ctx->pc = 0x190978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x190980u);
        ctx->pc = 0x19097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190978u;
        // 0x19097c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190978u, 0x190980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190980u;
label_190980:
    // 0x190980: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_190984:
    // 0x190984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190988:
    // 0x190988: 0xc063f28  jal         func_18FCA0
label_19098c:
    if (ctx->pc == 0x19098Cu) {
        ctx->pc = 0x19098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190988u;
        // 0x19098c: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190990u;
        goto label_190990;
    }
    ctx->pc = 0x190988u;
    SET_GPR_U32(ctx, 31, 0x190990u);
    ctx->pc = 0x19098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190988u;
    // 0x19098c: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FCA0u, 0x190988u, 0x190990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190990u;
label_190990:
    // 0x190990: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_190994:
    if (ctx->pc == 0x190994u) {
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190998u;
        goto label_190998;
    }
    ctx->pc = 0x190990u;
    {
        const bool branch_taken_0x190990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190990) {
            ctx->pc = 0x1909A8u;
            goto label_1909a8;
        }
    }
    ctx->pc = 0x190998u;
label_190998:
    // 0x190998: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x190998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_19099c:
    // 0x19099c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
label_1909a0:
    // 0x1909a0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1909a4:
    // 0x1909a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1909a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1909a8:
    // 0x1909a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1909a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1909ac:
    // 0x1909ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1909b0:
    if (ctx->pc == 0x1909B0u) {
        ctx->pc = 0x1909B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909ACu;
        // 0x1909b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909B4u;
        goto label_1909b4;
    }
    ctx->pc = 0x1909ACu;
    {
        const bool branch_taken_0x1909ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1909B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909ACu;
        // 0x1909b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909ac) {
            ctx->pc = 0x1909C0u;
            goto label_1909c0;
        }
    }
    ctx->pc = 0x1909B4u;
label_1909b4:
    // 0x1909b4: 0xc0401a4  jal         func_100690
label_1909b8:
    if (ctx->pc == 0x1909B8u) {
        ctx->pc = 0x1909B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909B4u;
        // 0x1909b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909BCu;
        goto label_1909bc;
    }
    ctx->pc = 0x1909B4u;
    SET_GPR_U32(ctx, 31, 0x1909BCu);
    ctx->pc = 0x1909B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1909B4u;
    // 0x1909b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1909B4u, 0x1909BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909BCu;
label_1909bc:
    // 0x1909bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1909bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1909c0:
    // 0x1909c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1909c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1909c4:
    // 0x1909c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1909c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1909c8:
    // 0x1909c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1909c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1909cc:
    // 0x1909cc: 0x3e00008  jr          $ra
label_1909d0:
    if (ctx->pc == 0x1909D0u) {
        ctx->pc = 0x1909D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909CCu;
        // 0x1909d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1909D4u;
        goto label_fallthrough_0x1909cc;
    }
    ctx->pc = 0x1909CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1909D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909CCu;
        // 0x1909d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1909cc:
    ctx->pc = 0x1909D4u;
}
