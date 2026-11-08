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

// Function: FUN_00129960
// Address: 0x129960 - 0x129c40
void FUN_00129960_0x129960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129960_0x129960");
#endif

    switch (ctx->pc) {
        case 0x129960u: goto label_129960;
        case 0x129964u: goto label_129964;
        case 0x129968u: goto label_129968;
        case 0x12996cu: goto label_12996c;
        case 0x129970u: goto label_129970;
        case 0x129974u: goto label_129974;
        case 0x129978u: goto label_129978;
        case 0x12997cu: goto label_12997c;
        case 0x129980u: goto label_129980;
        case 0x129984u: goto label_129984;
        case 0x129988u: goto label_129988;
        case 0x12998cu: goto label_12998c;
        case 0x129990u: goto label_129990;
        case 0x129994u: goto label_129994;
        case 0x129998u: goto label_129998;
        case 0x12999cu: goto label_12999c;
        case 0x1299a0u: goto label_1299a0;
        case 0x1299a4u: goto label_1299a4;
        case 0x1299a8u: goto label_1299a8;
        case 0x1299acu: goto label_1299ac;
        case 0x1299b0u: goto label_1299b0;
        case 0x1299b4u: goto label_1299b4;
        case 0x1299b8u: goto label_1299b8;
        case 0x1299bcu: goto label_1299bc;
        case 0x1299c0u: goto label_1299c0;
        case 0x1299c4u: goto label_1299c4;
        case 0x1299c8u: goto label_1299c8;
        case 0x1299ccu: goto label_1299cc;
        case 0x1299d0u: goto label_1299d0;
        case 0x1299d4u: goto label_1299d4;
        case 0x1299d8u: goto label_1299d8;
        case 0x1299dcu: goto label_1299dc;
        case 0x1299e0u: goto label_1299e0;
        case 0x1299e4u: goto label_1299e4;
        case 0x1299e8u: goto label_1299e8;
        case 0x1299ecu: goto label_1299ec;
        case 0x1299f0u: goto label_1299f0;
        case 0x1299f4u: goto label_1299f4;
        case 0x1299f8u: goto label_1299f8;
        case 0x1299fcu: goto label_1299fc;
        case 0x129a00u: goto label_129a00;
        case 0x129a04u: goto label_129a04;
        case 0x129a08u: goto label_129a08;
        case 0x129a0cu: goto label_129a0c;
        case 0x129a10u: goto label_129a10;
        case 0x129a14u: goto label_129a14;
        case 0x129a18u: goto label_129a18;
        case 0x129a1cu: goto label_129a1c;
        case 0x129a20u: goto label_129a20;
        case 0x129a24u: goto label_129a24;
        case 0x129a28u: goto label_129a28;
        case 0x129a2cu: goto label_129a2c;
        case 0x129a30u: goto label_129a30;
        case 0x129a34u: goto label_129a34;
        case 0x129a38u: goto label_129a38;
        case 0x129a3cu: goto label_129a3c;
        case 0x129a40u: goto label_129a40;
        case 0x129a44u: goto label_129a44;
        case 0x129a48u: goto label_129a48;
        case 0x129a4cu: goto label_129a4c;
        case 0x129a50u: goto label_129a50;
        case 0x129a54u: goto label_129a54;
        case 0x129a58u: goto label_129a58;
        case 0x129a5cu: goto label_129a5c;
        case 0x129a60u: goto label_129a60;
        case 0x129a64u: goto label_129a64;
        case 0x129a68u: goto label_129a68;
        case 0x129a6cu: goto label_129a6c;
        case 0x129a70u: goto label_129a70;
        case 0x129a74u: goto label_129a74;
        case 0x129a78u: goto label_129a78;
        case 0x129a7cu: goto label_129a7c;
        case 0x129a80u: goto label_129a80;
        case 0x129a84u: goto label_129a84;
        case 0x129a88u: goto label_129a88;
        case 0x129a8cu: goto label_129a8c;
        case 0x129a90u: goto label_129a90;
        case 0x129a94u: goto label_129a94;
        case 0x129a98u: goto label_129a98;
        case 0x129a9cu: goto label_129a9c;
        case 0x129aa0u: goto label_129aa0;
        case 0x129aa4u: goto label_129aa4;
        case 0x129aa8u: goto label_129aa8;
        case 0x129aacu: goto label_129aac;
        case 0x129ab0u: goto label_129ab0;
        case 0x129ab4u: goto label_129ab4;
        case 0x129ab8u: goto label_129ab8;
        case 0x129abcu: goto label_129abc;
        case 0x129ac0u: goto label_129ac0;
        case 0x129ac4u: goto label_129ac4;
        case 0x129ac8u: goto label_129ac8;
        case 0x129accu: goto label_129acc;
        case 0x129ad0u: goto label_129ad0;
        case 0x129ad4u: goto label_129ad4;
        case 0x129ad8u: goto label_129ad8;
        case 0x129adcu: goto label_129adc;
        case 0x129ae0u: goto label_129ae0;
        case 0x129ae4u: goto label_129ae4;
        case 0x129ae8u: goto label_129ae8;
        case 0x129aecu: goto label_129aec;
        case 0x129af0u: goto label_129af0;
        case 0x129af4u: goto label_129af4;
        case 0x129af8u: goto label_129af8;
        case 0x129afcu: goto label_129afc;
        case 0x129b00u: goto label_129b00;
        case 0x129b04u: goto label_129b04;
        case 0x129b08u: goto label_129b08;
        case 0x129b0cu: goto label_129b0c;
        case 0x129b10u: goto label_129b10;
        case 0x129b14u: goto label_129b14;
        case 0x129b18u: goto label_129b18;
        case 0x129b1cu: goto label_129b1c;
        case 0x129b20u: goto label_129b20;
        case 0x129b24u: goto label_129b24;
        case 0x129b28u: goto label_129b28;
        case 0x129b2cu: goto label_129b2c;
        case 0x129b30u: goto label_129b30;
        case 0x129b34u: goto label_129b34;
        case 0x129b38u: goto label_129b38;
        case 0x129b3cu: goto label_129b3c;
        case 0x129b40u: goto label_129b40;
        case 0x129b44u: goto label_129b44;
        case 0x129b48u: goto label_129b48;
        case 0x129b4cu: goto label_129b4c;
        case 0x129b50u: goto label_129b50;
        case 0x129b54u: goto label_129b54;
        case 0x129b58u: goto label_129b58;
        case 0x129b5cu: goto label_129b5c;
        case 0x129b60u: goto label_129b60;
        case 0x129b64u: goto label_129b64;
        case 0x129b68u: goto label_129b68;
        case 0x129b6cu: goto label_129b6c;
        case 0x129b70u: goto label_129b70;
        case 0x129b74u: goto label_129b74;
        case 0x129b78u: goto label_129b78;
        case 0x129b7cu: goto label_129b7c;
        case 0x129b80u: goto label_129b80;
        case 0x129b84u: goto label_129b84;
        case 0x129b88u: goto label_129b88;
        case 0x129b8cu: goto label_129b8c;
        case 0x129b90u: goto label_129b90;
        case 0x129b94u: goto label_129b94;
        case 0x129b98u: goto label_129b98;
        case 0x129b9cu: goto label_129b9c;
        case 0x129ba0u: goto label_129ba0;
        case 0x129ba4u: goto label_129ba4;
        case 0x129ba8u: goto label_129ba8;
        case 0x129bacu: goto label_129bac;
        case 0x129bb0u: goto label_129bb0;
        case 0x129bb4u: goto label_129bb4;
        case 0x129bb8u: goto label_129bb8;
        case 0x129bbcu: goto label_129bbc;
        case 0x129bc0u: goto label_129bc0;
        case 0x129bc4u: goto label_129bc4;
        case 0x129bc8u: goto label_129bc8;
        case 0x129bccu: goto label_129bcc;
        case 0x129bd0u: goto label_129bd0;
        case 0x129bd4u: goto label_129bd4;
        case 0x129bd8u: goto label_129bd8;
        case 0x129bdcu: goto label_129bdc;
        case 0x129be0u: goto label_129be0;
        case 0x129be4u: goto label_129be4;
        case 0x129be8u: goto label_129be8;
        case 0x129becu: goto label_129bec;
        case 0x129bf0u: goto label_129bf0;
        case 0x129bf4u: goto label_129bf4;
        case 0x129bf8u: goto label_129bf8;
        case 0x129bfcu: goto label_129bfc;
        case 0x129c00u: goto label_129c00;
        case 0x129c04u: goto label_129c04;
        case 0x129c08u: goto label_129c08;
        case 0x129c0cu: goto label_129c0c;
        case 0x129c10u: goto label_129c10;
        case 0x129c14u: goto label_129c14;
        case 0x129c18u: goto label_129c18;
        case 0x129c1cu: goto label_129c1c;
        case 0x129c20u: goto label_129c20;
        case 0x129c24u: goto label_129c24;
        case 0x129c28u: goto label_129c28;
        case 0x129c2cu: goto label_129c2c;
        case 0x129c30u: goto label_129c30;
        case 0x129c34u: goto label_129c34;
        case 0x129c38u: goto label_129c38;
        case 0x129c3cu: goto label_129c3c;
        default: break;
    }

    ctx->pc = 0x129960u;

label_129960:
    // 0x129960: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x129960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_129964:
    // 0x129964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_129968:
    // 0x129968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12996c:
    // 0x12996c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_129970:
    // 0x129970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129974:
    // 0x129974: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x129974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_129978:
    // 0x129978: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
label_12997c:
    if (ctx->pc == 0x12997Cu) {
        ctx->pc = 0x129980u;
        goto label_129980;
    }
    ctx->pc = 0x129978u;
    {
        const bool branch_taken_0x129978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129978) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129980u;
label_129980:
    // 0x129980: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129984:
    // 0x129984: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x129984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_129988:
    // 0x129988: 0x320f809  jalr        $t9
label_12998c:
    if (ctx->pc == 0x12998Cu) {
        ctx->pc = 0x129990u;
        goto label_129990;
    }
    ctx->pc = 0x129988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129990u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129988u, 0x129990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129990u;
label_129990:
    // 0x129990: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_129994:
    if (ctx->pc == 0x129994u) {
        ctx->pc = 0x129998u;
        goto label_129998;
    }
    ctx->pc = 0x129990u;
    {
        const bool branch_taken_0x129990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129990) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129998u;
label_129998:
    // 0x129998: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x129998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12999c:
    // 0x12999c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x12999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_1299a0:
    // 0x1299a0: 0x24420b90  addiu       $v0, $v0, 0xB90
    ctx->pc = 0x1299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2960));
label_1299a4:
    // 0x1299a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1299a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1299a8:
    // 0x1299a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1299a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1299ac:
    // 0x1299ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1299acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1299b0:
    // 0x1299b0: 0xc04a834  jal         func_12A0D0
label_1299b4:
    if (ctx->pc == 0x1299B4u) {
        ctx->pc = 0x1299B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299B0u;
        // 0x1299b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299B8u;
        goto label_1299b8;
    }
    ctx->pc = 0x1299B0u;
    SET_GPR_U32(ctx, 31, 0x1299B8u);
    ctx->pc = 0x1299B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1299B0u;
    // 0x1299b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0D0u, 0x1299B0u, 0x1299B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299B8u;
label_1299b8:
    // 0x1299b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1299b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1299bc:
    // 0x1299bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1299bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1299c0:
    // 0x1299c0: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_1299c4:
    if (ctx->pc == 0x1299C4u) {
        ctx->pc = 0x1299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C0u;
        // 0x1299c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299C8u;
        goto label_1299c8;
    }
    ctx->pc = 0x1299C0u;
    {
        const bool branch_taken_0x1299c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299C0u;
        // 0x1299c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c0) {
            ctx->pc = 0x1299E8u;
            goto label_1299e8;
        }
    }
    ctx->pc = 0x1299C8u;
label_1299c8:
    // 0x1299c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1299cc:
    // 0x1299cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1299ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1299d0:
    // 0x1299d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1299d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1299d4:
    // 0x1299d4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1299d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1299d8:
    // 0x1299d8: 0x320f809  jalr        $t9
label_1299dc:
    if (ctx->pc == 0x1299DCu) {
        ctx->pc = 0x1299DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299D8u;
        // 0x1299dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299E0u;
        goto label_1299e0;
    }
    ctx->pc = 0x1299D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1299E0u);
        ctx->pc = 0x1299DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299D8u;
        // 0x1299dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1299D8u, 0x1299E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1299E0u;
label_1299e0:
    // 0x1299e0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1299e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1299e4:
    // 0x1299e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1299e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1299e8:
    // 0x1299e8: 0xc04a7bc  jal         func_129EF0
label_1299ec:
    if (ctx->pc == 0x1299ECu) {
        ctx->pc = 0x1299F0u;
        goto label_1299f0;
    }
    ctx->pc = 0x1299E8u;
    SET_GPR_U32(ctx, 31, 0x1299F0u);
    ctx->pc = 0x129EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129EF0u, 0x1299E8u, 0x1299F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299F0u;
label_1299f0:
    // 0x1299f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1299f4:
    // 0x1299f4: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
label_1299f8:
    if (ctx->pc == 0x1299F8u) {
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299F4u;
        // 0x1299f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1299FCu;
        goto label_1299fc;
    }
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299F4u;
        // 0x1299f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x129B00u;
            goto label_129b00;
        }
    }
    ctx->pc = 0x1299FCu;
label_1299fc:
    // 0x1299fc: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_129a00:
    if (ctx->pc == 0x129A00u) {
        ctx->pc = 0x129A04u;
        goto label_129a04;
    }
    ctx->pc = 0x1299FCu;
    {
        const bool branch_taken_0x1299fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1299fc) {
            ctx->pc = 0x129A80u;
            goto label_129a80;
        }
    }
    ctx->pc = 0x129A04u;
label_129a04:
    // 0x129a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_129a08:
    if (ctx->pc == 0x129A08u) {
        ctx->pc = 0x129A0Cu;
        goto label_129a0c;
    }
    ctx->pc = 0x129A04u;
    {
        const bool branch_taken_0x129a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a04) {
            ctx->pc = 0x129A14u;
            goto label_129a14;
        }
    }
    ctx->pc = 0x129A0Cu;
label_129a0c:
    // 0x129a0c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_129a10:
    if (ctx->pc == 0x129A10u) {
        ctx->pc = 0x129A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A0Cu;
        // 0x129a10: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A14u;
        goto label_129a14;
    }
    ctx->pc = 0x129A0Cu;
    {
        const bool branch_taken_0x129a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A0Cu;
        // 0x129a10: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a0c) {
            ctx->pc = 0x129B84u;
            goto label_129b84;
        }
    }
    ctx->pc = 0x129A14u;
label_129a14:
    // 0x129a14: 0xc0802aa  jal         func_200AA8
label_129a18:
    if (ctx->pc == 0x129A18u) {
        ctx->pc = 0x129A1Cu;
        goto label_129a1c;
    }
    ctx->pc = 0x129A14u;
    SET_GPR_U32(ctx, 31, 0x129A1Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129A14u, 0x129A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A1Cu;
label_129a1c:
    // 0x129a1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129a20:
    // 0x129a20: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x129a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_129a24:
    // 0x129a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129a28:
    // 0x129a28: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x129a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
label_129a2c:
    // 0x129a2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129a30:
    // 0x129a30: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x129a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_129a34:
    // 0x129a34: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_129a38:
    // 0x129a38: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_129a3c:
    // 0x129a3c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x129a3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_129a40:
    // 0x129a40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x129a40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129a44:
    // 0x129a44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x129a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129a48:
    // 0x129a48: 0x0  nop
    ctx->pc = 0x129a48u;
    // NOP
label_129a4c:
    // 0x129a4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x129a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_129a50:
    // 0x129a50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_129a54:
    // 0x129a54: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x129a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_129a58:
    // 0x129a58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129a5c:
    // 0x129a5c: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_129a60:
    // 0x129a60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x129a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129a64:
    // 0x129a64: 0x0  nop
    ctx->pc = 0x129a64u;
    // NOP
label_129a68:
    // 0x129a68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x129a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_129a6c:
    // 0x129a6c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x129a6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_129a70:
    // 0x129a70: 0x0  nop
    ctx->pc = 0x129a70u;
    // NOP
label_129a74:
    // 0x129a74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129a78:
    // 0x129a78: 0x10000041  b           . + 4 + (0x41 << 2)
label_129a7c:
    if (ctx->pc == 0x129A7Cu) {
        ctx->pc = 0x129A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A78u;
        // 0x129a7c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129A80u;
        goto label_129a80;
    }
    ctx->pc = 0x129A78u;
    {
        const bool branch_taken_0x129a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A78u;
        // 0x129a7c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a78) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129A80u;
label_129a80:
    // 0x129a80: 0xc0802aa  jal         func_200AA8
label_129a84:
    if (ctx->pc == 0x129A84u) {
        ctx->pc = 0x129A88u;
        goto label_129a88;
    }
    ctx->pc = 0x129A80u;
    SET_GPR_U32(ctx, 31, 0x129A88u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129A80u, 0x129A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A88u;
label_129a88:
    // 0x129a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129a8c:
    // 0x129a8c: 0x0  nop
    ctx->pc = 0x129a8cu;
    // NOP
label_129a90:
    // 0x129a90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129a94:
    // 0x129a94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x129a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_129a98:
    // 0x129a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129a9c:
    // 0x129a9c: 0x0  nop
    ctx->pc = 0x129a9cu;
    // NOP
label_129aa0:
    // 0x129aa0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x129aa0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_129aa4:
    // 0x129aa4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_129aa8:
    // 0x129aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129aac:
    // 0x129aac: 0x0  nop
    ctx->pc = 0x129aacu;
    // NOP
label_129ab0:
    // 0x129ab0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x129ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_129ab4:
    // 0x129ab4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_129ab8:
    // 0x129ab8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x129ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_129abc:
    // 0x129abc: 0xc04a7dc  jal         func_129F70
label_129ac0:
    if (ctx->pc == 0x129AC0u) {
        ctx->pc = 0x129AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ABCu;
        // 0x129ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129AC4u;
        goto label_129ac4;
    }
    ctx->pc = 0x129ABCu;
    SET_GPR_U32(ctx, 31, 0x129AC4u);
    ctx->pc = 0x129AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ABCu;
    // 0x129ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x129ABCu, 0x129AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AC4u;
label_129ac4:
    // 0x129ac4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x129ac4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129ac8:
    // 0x129ac8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
label_129acc:
    // 0x129acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ad0:
    // 0x129ad0: 0x0  nop
    ctx->pc = 0x129ad0u;
    // NOP
label_129ad4:
    // 0x129ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129ad8:
    // 0x129ad8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_129adc:
    // 0x129adc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_129ae0:
    // 0x129ae0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129ae0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_129ae4:
    // 0x129ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ae8:
    // 0x129ae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129aec:
    // 0x129aec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129af0:
    // 0x129af0: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x129af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129af4:
    // 0x129af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129af8:
    // 0x129af8: 0x10000021  b           . + 4 + (0x21 << 2)
label_129afc:
    if (ctx->pc == 0x129AFCu) {
        ctx->pc = 0x129AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF8u;
        // 0x129afc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129B00u;
        goto label_129b00;
    }
    ctx->pc = 0x129AF8u;
    {
        const bool branch_taken_0x129af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AF8u;
        // 0x129afc: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129af8) {
            ctx->pc = 0x129B80u;
            goto label_129b80;
        }
    }
    ctx->pc = 0x129B00u;
label_129b00:
    // 0x129b00: 0xc0802aa  jal         func_200AA8
label_129b04:
    if (ctx->pc == 0x129B04u) {
        ctx->pc = 0x129B08u;
        goto label_129b08;
    }
    ctx->pc = 0x129B00u;
    SET_GPR_U32(ctx, 31, 0x129B08u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129B00u, 0x129B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B08u;
label_129b08:
    // 0x129b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129b0c:
    // 0x129b0c: 0x0  nop
    ctx->pc = 0x129b0cu;
    // NOP
label_129b10:
    // 0x129b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129b14:
    // 0x129b14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_129b18:
    // 0x129b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b1c:
    // 0x129b1c: 0x0  nop
    ctx->pc = 0x129b1cu;
    // NOP
label_129b20:
    // 0x129b20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129b20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_129b24:
    // 0x129b24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x129b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_129b28:
    // 0x129b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b2c:
    // 0x129b2c: 0x0  nop
    ctx->pc = 0x129b2cu;
    // NOP
label_129b30:
    // 0x129b30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129b34:
    // 0x129b34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_129b38:
    // 0x129b38: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x129b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_129b3c:
    // 0x129b3c: 0xc04a7dc  jal         func_129F70
label_129b40:
    if (ctx->pc == 0x129B40u) {
        ctx->pc = 0x129B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B3Cu;
        // 0x129b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129B44u;
        goto label_129b44;
    }
    ctx->pc = 0x129B3Cu;
    SET_GPR_U32(ctx, 31, 0x129B44u);
    ctx->pc = 0x129B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129B3Cu;
    // 0x129b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x129B3Cu, 0x129B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B44u;
label_129b44:
    // 0x129b44: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x129b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_129b48:
    // 0x129b48: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
label_129b4c:
    // 0x129b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129b50:
    // 0x129b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x129b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b54:
    // 0x129b54: 0x0  nop
    ctx->pc = 0x129b54u;
    // NOP
label_129b58:
    // 0x129b58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129b5c:
    // 0x129b5c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_129b60:
    // 0x129b60: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_129b64:
    // 0x129b64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129b64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_129b68:
    // 0x129b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b6c:
    // 0x129b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_129b70:
    // 0x129b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129b74:
    // 0x129b74: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x129b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_129b78:
    // 0x129b78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_129b7c:
    // 0x129b7c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x129b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_129b80:
    // 0x129b80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x129b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_129b84:
    // 0x129b84: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_129b88:
    // 0x129b88: 0x24630df0  addiu       $v1, $v1, 0xDF0
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3568));
label_129b8c:
    // 0x129b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129b90:
    // 0x129b90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_129b94:
    // 0x129b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_129b98:
    // 0x129b98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x129b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129b9c:
    // 0x129b9c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x129b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129ba0:
    // 0x129ba0: 0x0  nop
    ctx->pc = 0x129ba0u;
    // NOP
label_129ba4:
    // 0x129ba4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_129ba8:
    if (ctx->pc == 0x129BA8u) {
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BACu;
        goto label_129bac;
    }
    ctx->pc = 0x129BA4u;
    {
        const bool branch_taken_0x129ba4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ba4) {
            ctx->pc = 0x129C2Cu;
            goto label_129c2c;
        }
    }
    ctx->pc = 0x129BACu;
label_129bac:
    // 0x129bac: 0xc07d3ac  jal         func_1F4EB0
label_129bb0:
    if (ctx->pc == 0x129BB0u) {
        ctx->pc = 0x129BB4u;
        goto label_129bb4;
    }
    ctx->pc = 0x129BACu;
    SET_GPR_U32(ctx, 31, 0x129BB4u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129BACu, 0x129BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BB4u;
label_129bb4:
    // 0x129bb4: 0xc07d3ac  jal         func_1F4EB0
label_129bb8:
    if (ctx->pc == 0x129BB8u) {
        ctx->pc = 0x129BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB4u;
        // 0x129bb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BBCu;
        goto label_129bbc;
    }
    ctx->pc = 0x129BB4u;
    SET_GPR_U32(ctx, 31, 0x129BBCu);
    ctx->pc = 0x129BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BB4u;
    // 0x129bb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x129BB4u, 0x129BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BBCu;
label_129bbc:
    // 0x129bbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x129bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_129bc0:
    // 0x129bc0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x129bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_129bc4:
    // 0x129bc4: 0x24420df0  addiu       $v0, $v0, 0xDF0
    ctx->pc = 0x129bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3568));
label_129bc8:
    // 0x129bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_129bcc:
    // 0x129bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129bd0:
    // 0x129bd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x129bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129bd4:
    // 0x129bd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x129bd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_129bd8:
    // 0x129bd8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x129bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_129bdc:
    // 0x129bdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129be0:
    // 0x129be0: 0xc04c6d8  jal         func_131B60
label_129be4:
    if (ctx->pc == 0x129BE4u) {
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE0u;
        // 0x129be4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BE8u;
        goto label_129be8;
    }
    ctx->pc = 0x129BE0u;
    SET_GPR_U32(ctx, 31, 0x129BE8u);
    ctx->pc = 0x129BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BE0u;
    // 0x129be4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x129BE0u, 0x129BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BE8u;
label_129be8:
    // 0x129be8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x129be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129bec:
    // 0x129bec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_129bf0:
    // 0x129bf0: 0xc07d428  jal         func_1F50A0
label_129bf4:
    if (ctx->pc == 0x129BF4u) {
        ctx->pc = 0x129BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BF0u;
        // 0x129bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BF8u;
        goto label_129bf8;
    }
    ctx->pc = 0x129BF0u;
    SET_GPR_U32(ctx, 31, 0x129BF8u);
    ctx->pc = 0x129BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BF0u;
    // 0x129bf4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x129BF0u, 0x129BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BF8u;
label_129bf8:
    // 0x129bf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_129bfc:
    // 0x129bfc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_129c00:
    // 0x129c00: 0xc07d2ee  jal         func_1F4BB8
label_129c04:
    if (ctx->pc == 0x129C04u) {
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C00u;
        // 0x129c04: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C08u;
        goto label_129c08;
    }
    ctx->pc = 0x129C00u;
    SET_GPR_U32(ctx, 31, 0x129C08u);
    ctx->pc = 0x129C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C00u;
    // 0x129c04: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129C00u, 0x129C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C08u;
label_129c08:
    // 0x129c08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_129c0c:
    // 0x129c0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_129c10:
    // 0x129c10: 0xc07d2ee  jal         func_1F4BB8
label_129c14:
    if (ctx->pc == 0x129C14u) {
        ctx->pc = 0x129C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C10u;
        // 0x129c14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C18u;
        goto label_129c18;
    }
    ctx->pc = 0x129C10u;
    SET_GPR_U32(ctx, 31, 0x129C18u);
    ctx->pc = 0x129C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C10u;
    // 0x129c14: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x129C10u, 0x129C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C18u;
label_129c18:
    // 0x129c18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129c1c:
    // 0x129c1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x129c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_129c20:
    // 0x129c20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_129c24:
    // 0x129c24: 0x320f809  jalr        $t9
label_129c28:
    if (ctx->pc == 0x129C28u) {
        ctx->pc = 0x129C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C24u;
        // 0x129c28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C2Cu;
        goto label_129c2c;
    }
    ctx->pc = 0x129C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x129C2Cu);
        ctx->pc = 0x129C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C24u;
        // 0x129c28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C24u, 0x129C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129C2Cu;
label_129c2c:
    // 0x129c2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_129c30:
    // 0x129c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_129c34:
    // 0x129c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129c38:
    // 0x129c38: 0x3e00008  jr          $ra
label_129c3c:
    if (ctx->pc == 0x129C3Cu) {
        ctx->pc = 0x129C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C38u;
        // 0x129c3c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C40u;
        goto label_fallthrough_0x129c38;
    }
    ctx->pc = 0x129C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C38u;
        // 0x129c3c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x129c38:
    ctx->pc = 0x129C40u;
}
