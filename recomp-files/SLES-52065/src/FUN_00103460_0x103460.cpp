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

// Function: FUN_00103460
// Address: 0x103460 - 0x105228
void FUN_00103460_0x103460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00103460_0x103460");
#endif

    switch (ctx->pc) {
        case 0x1038c8u: goto label_1038c8;
        case 0x1038d8u: goto label_1038d8;
        case 0x1038ecu: goto label_1038ec;
        case 0x1038fcu: goto label_1038fc;
        case 0x10391cu: goto label_10391c;
        case 0x10392cu: goto label_10392c;
        case 0x10394cu: goto label_10394c;
        case 0x10395cu: goto label_10395c;
        case 0x10397cu: goto label_10397c;
        case 0x10398cu: goto label_10398c;
        case 0x1039b8u: goto label_1039b8;
        case 0x1039d0u: goto label_1039d0;
        case 0x1039e0u: goto label_1039e0;
        case 0x103a00u: goto label_103a00;
        case 0x103a24u: goto label_103a24;
        case 0x103a34u: goto label_103a34;
        case 0x103a54u: goto label_103a54;
        case 0x103a78u: goto label_103a78;
        case 0x103a88u: goto label_103a88;
        case 0x103ac0u: goto label_103ac0;
        case 0x103ad0u: goto label_103ad0;
        case 0x103b0cu: goto label_103b0c;
        case 0x103b1cu: goto label_103b1c;
        case 0x103b3cu: goto label_103b3c;
        case 0x103b64u: goto label_103b64;
        case 0x103b74u: goto label_103b74;
        case 0x103b94u: goto label_103b94;
        case 0x103bb4u: goto label_103bb4;
        case 0x103bc4u: goto label_103bc4;
        case 0x103bfcu: goto label_103bfc;
        case 0x103c0cu: goto label_103c0c;
        case 0x103c44u: goto label_103c44;
        case 0x103c54u: goto label_103c54;
        case 0x103c90u: goto label_103c90;
        case 0x103ca0u: goto label_103ca0;
        case 0x103cc0u: goto label_103cc0;
        case 0x103ce4u: goto label_103ce4;
        case 0x103cf4u: goto label_103cf4;
        case 0x103d14u: goto label_103d14;
        case 0x103d38u: goto label_103d38;
        case 0x103d48u: goto label_103d48;
        case 0x103d68u: goto label_103d68;
        case 0x103d78u: goto label_103d78;
        case 0x103da4u: goto label_103da4;
        case 0x103db4u: goto label_103db4;
        case 0x103decu: goto label_103dec;
        case 0x103dfcu: goto label_103dfc;
        case 0x103e34u: goto label_103e34;
        case 0x103e44u: goto label_103e44;
        case 0x103e7cu: goto label_103e7c;
        case 0x103e8cu: goto label_103e8c;
        case 0x103ec4u: goto label_103ec4;
        case 0x103ed4u: goto label_103ed4;
        case 0x103ef4u: goto label_103ef4;
        case 0x103f04u: goto label_103f04;
        case 0x103f24u: goto label_103f24;
        case 0x103f34u: goto label_103f34;
        case 0x103f60u: goto label_103f60;
        case 0x103f70u: goto label_103f70;
        case 0x103fa8u: goto label_103fa8;
        case 0x103fb8u: goto label_103fb8;
        case 0x103fe4u: goto label_103fe4;
        case 0x103ff4u: goto label_103ff4;
        case 0x10402cu: goto label_10402c;
        case 0x10403cu: goto label_10403c;
        case 0x104074u: goto label_104074;
        case 0x104084u: goto label_104084;
        case 0x1040b0u: goto label_1040b0;
        case 0x1040c0u: goto label_1040c0;
        case 0x1040f8u: goto label_1040f8;
        case 0x104108u: goto label_104108;
        case 0x104140u: goto label_104140;
        case 0x104150u: goto label_104150;
        case 0x104188u: goto label_104188;
        case 0x104198u: goto label_104198;
        case 0x1041d0u: goto label_1041d0;
        case 0x1041e0u: goto label_1041e0;
        case 0x104218u: goto label_104218;
        case 0x104228u: goto label_104228;
        case 0x104254u: goto label_104254;
        case 0x104264u: goto label_104264;
        case 0x10429cu: goto label_10429c;
        case 0x1042acu: goto label_1042ac;
        case 0x1042e4u: goto label_1042e4;
        case 0x1042f4u: goto label_1042f4;
        case 0x10432cu: goto label_10432c;
        case 0x10433cu: goto label_10433c;
        case 0x104374u: goto label_104374;
        case 0x104384u: goto label_104384;
        case 0x1043bcu: goto label_1043bc;
        case 0x1043ccu: goto label_1043cc;
        case 0x104404u: goto label_104404;
        case 0x104414u: goto label_104414;
        case 0x10444cu: goto label_10444c;
        case 0x10445cu: goto label_10445c;
        case 0x104488u: goto label_104488;
        case 0x104498u: goto label_104498;
        case 0x1044d0u: goto label_1044d0;
        case 0x1044e0u: goto label_1044e0;
        case 0x104518u: goto label_104518;
        case 0x104528u: goto label_104528;
        case 0x104560u: goto label_104560;
        case 0x104570u: goto label_104570;
        case 0x1045a8u: goto label_1045a8;
        case 0x1045b8u: goto label_1045b8;
        case 0x1045f0u: goto label_1045f0;
        case 0x104600u: goto label_104600;
        case 0x104638u: goto label_104638;
        case 0x104648u: goto label_104648;
        case 0x104680u: goto label_104680;
        case 0x104690u: goto label_104690;
        case 0x1046c8u: goto label_1046c8;
        case 0x1046d8u: goto label_1046d8;
        case 0x1046f8u: goto label_1046f8;
        case 0x104708u: goto label_104708;
        case 0x104734u: goto label_104734;
        case 0x104744u: goto label_104744;
        case 0x104770u: goto label_104770;
        case 0x104780u: goto label_104780;
        case 0x1047acu: goto label_1047ac;
        case 0x1047bcu: goto label_1047bc;
        case 0x1047f4u: goto label_1047f4;
        case 0x104804u: goto label_104804;
        case 0x104824u: goto label_104824;
        case 0x104834u: goto label_104834;
        case 0x104860u: goto label_104860;
        case 0x104870u: goto label_104870;
        case 0x10489cu: goto label_10489c;
        case 0x1048acu: goto label_1048ac;
        case 0x1048d8u: goto label_1048d8;
        case 0x1048e8u: goto label_1048e8;
        case 0x104920u: goto label_104920;
        case 0x104930u: goto label_104930;
        case 0x104950u: goto label_104950;
        case 0x104960u: goto label_104960;
        case 0x104998u: goto label_104998;
        case 0x1049a8u: goto label_1049a8;
        case 0x1049d4u: goto label_1049d4;
        case 0x1049e4u: goto label_1049e4;
        case 0x104a1cu: goto label_104a1c;
        case 0x104a2cu: goto label_104a2c;
        case 0x104a64u: goto label_104a64;
        case 0x104a74u: goto label_104a74;
        case 0x104aacu: goto label_104aac;
        case 0x104abcu: goto label_104abc;
        case 0x104af4u: goto label_104af4;
        case 0x104b04u: goto label_104b04;
        case 0x104b24u: goto label_104b24;
        case 0x104b34u: goto label_104b34;
        case 0x104b54u: goto label_104b54;
        case 0x104b64u: goto label_104b64;
        case 0x104b9cu: goto label_104b9c;
        case 0x104bacu: goto label_104bac;
        case 0x104bd8u: goto label_104bd8;
        case 0x104be8u: goto label_104be8;
        case 0x104c20u: goto label_104c20;
        case 0x104c30u: goto label_104c30;
        case 0x104c68u: goto label_104c68;
        case 0x104c78u: goto label_104c78;
        case 0x104cb0u: goto label_104cb0;
        case 0x104cc4u: goto label_104cc4;
        case 0x104cfcu: goto label_104cfc;
        case 0x104d0cu: goto label_104d0c;
        case 0x104d30u: goto label_104d30;
        case 0x104d44u: goto label_104d44;
        case 0x104d7cu: goto label_104d7c;
        case 0x104d8cu: goto label_104d8c;
        case 0x104db0u: goto label_104db0;
        case 0x104dc4u: goto label_104dc4;
        case 0x104dfcu: goto label_104dfc;
        case 0x104e0cu: goto label_104e0c;
        case 0x104e30u: goto label_104e30;
        case 0x104e40u: goto label_104e40;
        case 0x104e80u: goto label_104e80;
        case 0x104e90u: goto label_104e90;
        case 0x104ec4u: goto label_104ec4;
        case 0x104ed8u: goto label_104ed8;
        case 0x104ef8u: goto label_104ef8;
        case 0x104f00u: goto label_104f00;
        case 0x104f2cu: goto label_104f2c;
        case 0x104f34u: goto label_104f34;
        case 0x104f54u: goto label_104f54;
        case 0x104f70u: goto label_104f70;
        case 0x104f80u: goto label_104f80;
        case 0x104fb8u: goto label_104fb8;
        case 0x104fccu: goto label_104fcc;
        case 0x104fecu: goto label_104fec;
        case 0x104ff4u: goto label_104ff4;
        case 0x105034u: goto label_105034;
        case 0x105044u: goto label_105044;
        case 0x105058u: goto label_105058;
        case 0x105068u: goto label_105068;
        case 0x1050a0u: goto label_1050a0;
        case 0x1050b0u: goto label_1050b0;
        case 0x1050e8u: goto label_1050e8;
        case 0x1050f8u: goto label_1050f8;
        case 0x105130u: goto label_105130;
        case 0x105140u: goto label_105140;
        case 0x105160u: goto label_105160;
        case 0x105170u: goto label_105170;
        case 0x1051a8u: goto label_1051a8;
        case 0x1051b8u: goto label_1051b8;
        case 0x1051e0u: goto label_1051e0;
        case 0x1051f0u: goto label_1051f0;
        default: break;
    }

    ctx->pc = 0x103460u;

    // 0x103460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103464: 0x240303e9  addiu       $v1, $zero, 0x3E9
    ctx->pc = 0x103464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x103468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10346c: 0x10a3075a  beq         $a1, $v1, . + 4 + (0x75A << 2)
    ctx->pc = 0x10346Cu;
    {
        const bool branch_taken_0x10346c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10346Cu;
        // 0x103470: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10346c) {
            ctx->pc = 0x1051D8u;
            goto label_1051d8;
        }
    }
    ctx->pc = 0x103474u;
    // 0x103474: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x103474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x103478: 0x10a30749  beq         $a1, $v1, . + 4 + (0x749 << 2)
    ctx->pc = 0x103478u;
    {
        const bool branch_taken_0x103478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103478u;
        // 0x10347c: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103478) {
            ctx->pc = 0x1051A0u;
            goto label_1051a0;
        }
    }
    ctx->pc = 0x103480u;
    // 0x103480: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x103480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x103484: 0x10a30734  beq         $a1, $v1, . + 4 + (0x734 << 2)
    ctx->pc = 0x103484u;
    {
        const bool branch_taken_0x103484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103484u;
        // 0x103488: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103484) {
            ctx->pc = 0x105158u;
            goto label_105158;
        }
    }
    ctx->pc = 0x10348Cu;
    // 0x10348c: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x10348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x103490: 0x10a30725  beq         $a1, $v1, . + 4 + (0x725 << 2)
    ctx->pc = 0x103490u;
    {
        const bool branch_taken_0x103490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103490u;
        // 0x103494: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103490) {
            ctx->pc = 0x105128u;
            goto label_105128;
        }
    }
    ctx->pc = 0x103498u;
    // 0x103498: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x103498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x10349c: 0x10a30710  beq         $a1, $v1, . + 4 + (0x710 << 2)
    ctx->pc = 0x10349Cu;
    {
        const bool branch_taken_0x10349c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10349Cu;
        // 0x1034a0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10349c) {
            ctx->pc = 0x1050E0u;
            goto label_1050e0;
        }
    }
    ctx->pc = 0x1034A4u;
    // 0x1034a4: 0x24030089  addiu       $v1, $zero, 0x89
    ctx->pc = 0x1034a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1034a8: 0x10a306fb  beq         $a1, $v1, . + 4 + (0x6FB << 2)
    ctx->pc = 0x1034A8u;
    {
        const bool branch_taken_0x1034a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034A8u;
        // 0x1034ac: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034a8) {
            ctx->pc = 0x105098u;
            goto label_105098;
        }
    }
    ctx->pc = 0x1034B0u;
    // 0x1034b0: 0x2403008b  addiu       $v1, $zero, 0x8B
    ctx->pc = 0x1034b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1034b4: 0x10a306e6  beq         $a1, $v1, . + 4 + (0x6E6 << 2)
    ctx->pc = 0x1034B4u;
    {
        const bool branch_taken_0x1034b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034B4u;
        // 0x1034b8: 0x240402b0  addiu       $a0, $zero, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034b4) {
            ctx->pc = 0x105050u;
            goto label_105050;
        }
    }
    ctx->pc = 0x1034BCu;
    // 0x1034bc: 0x2403008d  addiu       $v1, $zero, 0x8D
    ctx->pc = 0x1034bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1034c0: 0x10a306da  beq         $a1, $v1, . + 4 + (0x6DA << 2)
    ctx->pc = 0x1034C0u;
    {
        const bool branch_taken_0x1034c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C0u;
        // 0x1034c4: 0x24040480  addiu       $a0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034c0) {
            ctx->pc = 0x10502Cu;
            goto label_10502c;
        }
    }
    ctx->pc = 0x1034C8u;
    // 0x1034c8: 0x240304b2  addiu       $v1, $zero, 0x4B2
    ctx->pc = 0x1034c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x1034cc: 0x10a306b8  beq         $a1, $v1, . + 4 + (0x6B8 << 2)
    ctx->pc = 0x1034CCu;
    {
        const bool branch_taken_0x1034cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034CCu;
        // 0x1034d0: 0x24042320  addiu       $a0, $zero, 0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034cc) {
            ctx->pc = 0x104FB0u;
            goto label_104fb0;
        }
    }
    ctx->pc = 0x1034D4u;
    // 0x1034d4: 0x240304b1  addiu       $v1, $zero, 0x4B1
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    // 0x1034d8: 0x10a306a3  beq         $a1, $v1, . + 4 + (0x6A3 << 2)
    ctx->pc = 0x1034D8u;
    {
        const bool branch_taken_0x1034d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034D8u;
        // 0x1034dc: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034d8) {
            ctx->pc = 0x104F68u;
            goto label_104f68;
        }
    }
    ctx->pc = 0x1034E0u;
    // 0x1034e0: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x1034e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x1034e4: 0x10a30675  beq         $a1, $v1, . + 4 + (0x675 << 2)
    ctx->pc = 0x1034E4u;
    {
        const bool branch_taken_0x1034e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034E4u;
        // 0x1034e8: 0x24044400  addiu       $a0, $zero, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034e4) {
            ctx->pc = 0x104EBCu;
            goto label_104ebc;
        }
    }
    ctx->pc = 0x1034ECu;
    // 0x1034ec: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1034f0: 0x10a30661  beq         $a1, $v1, . + 4 + (0x661 << 2)
    ctx->pc = 0x1034F0u;
    {
        const bool branch_taken_0x1034f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1034F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034F0u;
        // 0x1034f4: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034f0) {
            ctx->pc = 0x104E78u;
            goto label_104e78;
        }
    }
    ctx->pc = 0x1034F8u;
    // 0x1034f8: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x1034f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1034fc: 0x10a3064a  beq         $a1, $v1, . + 4 + (0x64A << 2)
    ctx->pc = 0x1034FCu;
    {
        const bool branch_taken_0x1034fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034FCu;
        // 0x103500: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034fc) {
            ctx->pc = 0x104E28u;
            goto label_104e28;
        }
    }
    ctx->pc = 0x103504u;
    // 0x103504: 0x24030104  addiu       $v1, $zero, 0x104
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x103508: 0x10a30627  beq         $a1, $v1, . + 4 + (0x627 << 2)
    ctx->pc = 0x103508u;
    {
        const bool branch_taken_0x103508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103508u;
        // 0x10350c: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103508) {
            ctx->pc = 0x104DA8u;
            goto label_104da8;
        }
    }
    ctx->pc = 0x103510u;
    // 0x103510: 0x24030103  addiu       $v1, $zero, 0x103
    ctx->pc = 0x103510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x103514: 0x10a30604  beq         $a1, $v1, . + 4 + (0x604 << 2)
    ctx->pc = 0x103514u;
    {
        const bool branch_taken_0x103514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103514u;
        // 0x103518: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103514) {
            ctx->pc = 0x104D28u;
            goto label_104d28;
        }
    }
    ctx->pc = 0x10351Cu;
    // 0x10351c: 0x24030102  addiu       $v1, $zero, 0x102
    ctx->pc = 0x10351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x103520: 0x10a305e1  beq         $a1, $v1, . + 4 + (0x5E1 << 2)
    ctx->pc = 0x103520u;
    {
        const bool branch_taken_0x103520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103520u;
        // 0x103524: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103520) {
            ctx->pc = 0x104CA8u;
            goto label_104ca8;
        }
    }
    ctx->pc = 0x103528u;
    // 0x103528: 0x24030067  addiu       $v1, $zero, 0x67
    ctx->pc = 0x103528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x10352c: 0x10a305cc  beq         $a1, $v1, . + 4 + (0x5CC << 2)
    ctx->pc = 0x10352Cu;
    {
        const bool branch_taken_0x10352c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10352Cu;
        // 0x103530: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10352c) {
            ctx->pc = 0x104C60u;
            goto label_104c60;
        }
    }
    ctx->pc = 0x103534u;
    // 0x103534: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x103534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x103538: 0x10a305b7  beq         $a1, $v1, . + 4 + (0x5B7 << 2)
    ctx->pc = 0x103538u;
    {
        const bool branch_taken_0x103538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103538u;
        // 0x10353c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103538) {
            ctx->pc = 0x104C18u;
            goto label_104c18;
        }
    }
    ctx->pc = 0x103540u;
    // 0x103540: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x103540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x103544: 0x10a305a2  beq         $a1, $v1, . + 4 + (0x5A2 << 2)
    ctx->pc = 0x103544u;
    {
        const bool branch_taken_0x103544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103544u;
        // 0x103548: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103544) {
            ctx->pc = 0x104BD0u;
            goto label_104bd0;
        }
    }
    ctx->pc = 0x10354Cu;
    // 0x10354c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x10354cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x103550: 0x10a30590  beq         $a1, $v1, . + 4 + (0x590 << 2)
    ctx->pc = 0x103550u;
    {
        const bool branch_taken_0x103550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103550u;
        // 0x103554: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103550) {
            ctx->pc = 0x104B94u;
            goto label_104b94;
        }
    }
    ctx->pc = 0x103558u;
    // 0x103558: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x103558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10355c: 0x10a3057b  beq         $a1, $v1, . + 4 + (0x57B << 2)
    ctx->pc = 0x10355Cu;
    {
        const bool branch_taken_0x10355c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10355Cu;
        // 0x103560: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10355c) {
            ctx->pc = 0x104B4Cu;
            goto label_104b4c;
        }
    }
    ctx->pc = 0x103564u;
    // 0x103564: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x103564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x103568: 0x10a3056c  beq         $a1, $v1, . + 4 + (0x56C << 2)
    ctx->pc = 0x103568u;
    {
        const bool branch_taken_0x103568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103568u;
        // 0x10356c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103568) {
            ctx->pc = 0x104B1Cu;
            goto label_104b1c;
        }
    }
    ctx->pc = 0x103570u;
    // 0x103570: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x103570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x103574: 0x10a3055d  beq         $a1, $v1, . + 4 + (0x55D << 2)
    ctx->pc = 0x103574u;
    {
        const bool branch_taken_0x103574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103574u;
        // 0x103578: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103574) {
            ctx->pc = 0x104AECu;
            goto label_104aec;
        }
    }
    ctx->pc = 0x10357Cu;
    // 0x10357c: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x10357cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x103580: 0x10a30548  beq         $a1, $v1, . + 4 + (0x548 << 2)
    ctx->pc = 0x103580u;
    {
        const bool branch_taken_0x103580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103580u;
        // 0x103584: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103580) {
            ctx->pc = 0x104AA4u;
            goto label_104aa4;
        }
    }
    ctx->pc = 0x103588u;
    // 0x103588: 0x24030087  addiu       $v1, $zero, 0x87
    ctx->pc = 0x103588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x10358c: 0x10a30533  beq         $a1, $v1, . + 4 + (0x533 << 2)
    ctx->pc = 0x10358Cu;
    {
        const bool branch_taken_0x10358c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10358Cu;
        // 0x103590: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10358c) {
            ctx->pc = 0x104A5Cu;
            goto label_104a5c;
        }
    }
    ctx->pc = 0x103594u;
    // 0x103594: 0x24030092  addiu       $v1, $zero, 0x92
    ctx->pc = 0x103594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x103598: 0x10a3051e  beq         $a1, $v1, . + 4 + (0x51E << 2)
    ctx->pc = 0x103598u;
    {
        const bool branch_taken_0x103598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103598u;
        // 0x10359c: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103598) {
            ctx->pc = 0x104A14u;
            goto label_104a14;
        }
    }
    ctx->pc = 0x1035A0u;
    // 0x1035a0: 0x24030086  addiu       $v1, $zero, 0x86
    ctx->pc = 0x1035a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1035a4: 0x10a30509  beq         $a1, $v1, . + 4 + (0x509 << 2)
    ctx->pc = 0x1035A4u;
    {
        const bool branch_taken_0x1035a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035A4u;
        // 0x1035a8: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035a4) {
            ctx->pc = 0x1049CCu;
            goto label_1049cc;
        }
    }
    ctx->pc = 0x1035ACu;
    // 0x1035ac: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1035acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1035b0: 0x10a304f7  beq         $a1, $v1, . + 4 + (0x4F7 << 2)
    ctx->pc = 0x1035B0u;
    {
        const bool branch_taken_0x1035b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035B0u;
        // 0x1035b4: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035b0) {
            ctx->pc = 0x104990u;
            goto label_104990;
        }
    }
    ctx->pc = 0x1035B8u;
    // 0x1035b8: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x1035b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1035bc: 0x10a304e2  beq         $a1, $v1, . + 4 + (0x4E2 << 2)
    ctx->pc = 0x1035BCu;
    {
        const bool branch_taken_0x1035bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035BCu;
        // 0x1035c0: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035bc) {
            ctx->pc = 0x104948u;
            goto label_104948;
        }
    }
    ctx->pc = 0x1035C4u;
    // 0x1035c4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1035c8: 0x10a304d3  beq         $a1, $v1, . + 4 + (0x4D3 << 2)
    ctx->pc = 0x1035C8u;
    {
        const bool branch_taken_0x1035c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035C8u;
        // 0x1035cc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035c8) {
            ctx->pc = 0x104918u;
            goto label_104918;
        }
    }
    ctx->pc = 0x1035D0u;
    // 0x1035d0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1035d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1035d4: 0x10a304be  beq         $a1, $v1, . + 4 + (0x4BE << 2)
    ctx->pc = 0x1035D4u;
    {
        const bool branch_taken_0x1035d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035D4u;
        // 0x1035d8: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035d4) {
            ctx->pc = 0x1048D0u;
            goto label_1048d0;
        }
    }
    ctx->pc = 0x1035DCu;
    // 0x1035dc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1035dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1035e0: 0x10a304ac  beq         $a1, $v1, . + 4 + (0x4AC << 2)
    ctx->pc = 0x1035E0u;
    {
        const bool branch_taken_0x1035e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035E0u;
        // 0x1035e4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035e0) {
            ctx->pc = 0x104894u;
            goto label_104894;
        }
    }
    ctx->pc = 0x1035E8u;
    // 0x1035e8: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x1035e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1035ec: 0x10a3049a  beq         $a1, $v1, . + 4 + (0x49A << 2)
    ctx->pc = 0x1035ECu;
    {
        const bool branch_taken_0x1035ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035ECu;
        // 0x1035f0: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035ec) {
            ctx->pc = 0x104858u;
            goto label_104858;
        }
    }
    ctx->pc = 0x1035F4u;
    // 0x1035f4: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x1035f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1035f8: 0x10a30488  beq         $a1, $v1, . + 4 + (0x488 << 2)
    ctx->pc = 0x1035F8u;
    {
        const bool branch_taken_0x1035f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1035FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F8u;
        // 0x1035fc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f8) {
            ctx->pc = 0x10481Cu;
            goto label_10481c;
        }
    }
    ctx->pc = 0x103600u;
    // 0x103600: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x103600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x103604: 0x10a30479  beq         $a1, $v1, . + 4 + (0x479 << 2)
    ctx->pc = 0x103604u;
    {
        const bool branch_taken_0x103604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103604u;
        // 0x103608: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103604) {
            ctx->pc = 0x1047ECu;
            goto label_1047ec;
        }
    }
    ctx->pc = 0x10360Cu;
    // 0x10360c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x10360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x103610: 0x10a30464  beq         $a1, $v1, . + 4 + (0x464 << 2)
    ctx->pc = 0x103610u;
    {
        const bool branch_taken_0x103610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103610u;
        // 0x103614: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103610) {
            ctx->pc = 0x1047A4u;
            goto label_1047a4;
        }
    }
    ctx->pc = 0x103618u;
    // 0x103618: 0x240300cd  addiu       $v1, $zero, 0xCD
    ctx->pc = 0x103618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x10361c: 0x10a30452  beq         $a1, $v1, . + 4 + (0x452 << 2)
    ctx->pc = 0x10361Cu;
    {
        const bool branch_taken_0x10361c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10361Cu;
        // 0x103620: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10361c) {
            ctx->pc = 0x104768u;
            goto label_104768;
        }
    }
    ctx->pc = 0x103624u;
    // 0x103624: 0x240300cb  addiu       $v1, $zero, 0xCB
    ctx->pc = 0x103624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x103628: 0x10a30440  beq         $a1, $v1, . + 4 + (0x440 << 2)
    ctx->pc = 0x103628u;
    {
        const bool branch_taken_0x103628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103628u;
        // 0x10362c: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103628) {
            ctx->pc = 0x10472Cu;
            goto label_10472c;
        }
    }
    ctx->pc = 0x103630u;
    // 0x103630: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x103630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x103634: 0x10a3042e  beq         $a1, $v1, . + 4 + (0x42E << 2)
    ctx->pc = 0x103634u;
    {
        const bool branch_taken_0x103634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103634u;
        // 0x103638: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103634) {
            ctx->pc = 0x1046F0u;
            goto label_1046f0;
        }
    }
    ctx->pc = 0x10363Cu;
    // 0x10363c: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x10363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x103640: 0x10a3041f  beq         $a1, $v1, . + 4 + (0x41F << 2)
    ctx->pc = 0x103640u;
    {
        const bool branch_taken_0x103640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103640u;
        // 0x103644: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103640) {
            ctx->pc = 0x1046C0u;
            goto label_1046c0;
        }
    }
    ctx->pc = 0x103648u;
    // 0x103648: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x103648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x10364c: 0x10a3040a  beq         $a1, $v1, . + 4 + (0x40A << 2)
    ctx->pc = 0x10364Cu;
    {
        const bool branch_taken_0x10364c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10364Cu;
        // 0x103650: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10364c) {
            ctx->pc = 0x104678u;
            goto label_104678;
        }
    }
    ctx->pc = 0x103654u;
    // 0x103654: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x103654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x103658: 0x10a303f5  beq         $a1, $v1, . + 4 + (0x3F5 << 2)
    ctx->pc = 0x103658u;
    {
        const bool branch_taken_0x103658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103658u;
        // 0x10365c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103658) {
            ctx->pc = 0x104630u;
            goto label_104630;
        }
    }
    ctx->pc = 0x103660u;
    // 0x103660: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x103660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x103664: 0x10a303e0  beq         $a1, $v1, . + 4 + (0x3E0 << 2)
    ctx->pc = 0x103664u;
    {
        const bool branch_taken_0x103664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103664u;
        // 0x103668: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103664) {
            ctx->pc = 0x1045E8u;
            goto label_1045e8;
        }
    }
    ctx->pc = 0x10366Cu;
    // 0x10366c: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x10366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x103670: 0x10a303cb  beq         $a1, $v1, . + 4 + (0x3CB << 2)
    ctx->pc = 0x103670u;
    {
        const bool branch_taken_0x103670 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103670u;
        // 0x103674: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103670) {
            ctx->pc = 0x1045A0u;
            goto label_1045a0;
        }
    }
    ctx->pc = 0x103678u;
    // 0x103678: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x103678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x10367c: 0x10a303b6  beq         $a1, $v1, . + 4 + (0x3B6 << 2)
    ctx->pc = 0x10367Cu;
    {
        const bool branch_taken_0x10367c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10367Cu;
        // 0x103680: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10367c) {
            ctx->pc = 0x104558u;
            goto label_104558;
        }
    }
    ctx->pc = 0x103684u;
    // 0x103684: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x103684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x103688: 0x10a303a1  beq         $a1, $v1, . + 4 + (0x3A1 << 2)
    ctx->pc = 0x103688u;
    {
        const bool branch_taken_0x103688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103688u;
        // 0x10368c: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103688) {
            ctx->pc = 0x104510u;
            goto label_104510;
        }
    }
    ctx->pc = 0x103690u;
    // 0x103690: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x103690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x103694: 0x10a3038c  beq         $a1, $v1, . + 4 + (0x38C << 2)
    ctx->pc = 0x103694u;
    {
        const bool branch_taken_0x103694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103694u;
        // 0x103698: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103694) {
            ctx->pc = 0x1044C8u;
            goto label_1044c8;
        }
    }
    ctx->pc = 0x10369Cu;
    // 0x10369c: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x10369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1036a0: 0x10a30377  beq         $a1, $v1, . + 4 + (0x377 << 2)
    ctx->pc = 0x1036A0u;
    {
        const bool branch_taken_0x1036a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036A0u;
        // 0x1036a4: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036a0) {
            ctx->pc = 0x104480u;
            goto label_104480;
        }
    }
    ctx->pc = 0x1036A8u;
    // 0x1036a8: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1036a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1036ac: 0x10a30365  beq         $a1, $v1, . + 4 + (0x365 << 2)
    ctx->pc = 0x1036ACu;
    {
        const bool branch_taken_0x1036ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036ACu;
        // 0x1036b0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036ac) {
            ctx->pc = 0x104444u;
            goto label_104444;
        }
    }
    ctx->pc = 0x1036B4u;
    // 0x1036b4: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1036b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1036b8: 0x10a30350  beq         $a1, $v1, . + 4 + (0x350 << 2)
    ctx->pc = 0x1036B8u;
    {
        const bool branch_taken_0x1036b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036B8u;
        // 0x1036bc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036b8) {
            ctx->pc = 0x1043FCu;
            goto label_1043fc;
        }
    }
    ctx->pc = 0x1036C0u;
    // 0x1036c0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1036c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1036c4: 0x10a3033b  beq         $a1, $v1, . + 4 + (0x33B << 2)
    ctx->pc = 0x1036C4u;
    {
        const bool branch_taken_0x1036c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036C4u;
        // 0x1036c8: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036c4) {
            ctx->pc = 0x1043B4u;
            goto label_1043b4;
        }
    }
    ctx->pc = 0x1036CCu;
    // 0x1036cc: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x1036ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1036d0: 0x10a30326  beq         $a1, $v1, . + 4 + (0x326 << 2)
    ctx->pc = 0x1036D0u;
    {
        const bool branch_taken_0x1036d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036D0u;
        // 0x1036d4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036d0) {
            ctx->pc = 0x10436Cu;
            goto label_10436c;
        }
    }
    ctx->pc = 0x1036D8u;
    // 0x1036d8: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1036d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1036dc: 0x10a30311  beq         $a1, $v1, . + 4 + (0x311 << 2)
    ctx->pc = 0x1036DCu;
    {
        const bool branch_taken_0x1036dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036DCu;
        // 0x1036e0: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036dc) {
            ctx->pc = 0x104324u;
            goto label_104324;
        }
    }
    ctx->pc = 0x1036E4u;
    // 0x1036e4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1036e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1036e8: 0x10a302fc  beq         $a1, $v1, . + 4 + (0x2FC << 2)
    ctx->pc = 0x1036E8u;
    {
        const bool branch_taken_0x1036e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036E8u;
        // 0x1036ec: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036e8) {
            ctx->pc = 0x1042DCu;
            goto label_1042dc;
        }
    }
    ctx->pc = 0x1036F0u;
    // 0x1036f0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1036f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1036f4: 0x10a302e7  beq         $a1, $v1, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x1036F4u;
    {
        const bool branch_taken_0x1036f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1036F4u;
        // 0x1036f8: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1036f4) {
            ctx->pc = 0x104294u;
            goto label_104294;
        }
    }
    ctx->pc = 0x1036FCu;
    // 0x1036fc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1036fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x103700: 0x10a302d2  beq         $a1, $v1, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x103700u;
    {
        const bool branch_taken_0x103700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103700u;
        // 0x103704: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103700) {
            ctx->pc = 0x10424Cu;
            goto label_10424c;
        }
    }
    ctx->pc = 0x103708u;
    // 0x103708: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x103708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10370c: 0x10a302c0  beq         $a1, $v1, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x10370Cu;
    {
        const bool branch_taken_0x10370c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10370Cu;
        // 0x103710: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10370c) {
            ctx->pc = 0x104210u;
            goto label_104210;
        }
    }
    ctx->pc = 0x103714u;
    // 0x103714: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x103714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x103718: 0x10a302ab  beq         $a1, $v1, . + 4 + (0x2AB << 2)
    ctx->pc = 0x103718u;
    {
        const bool branch_taken_0x103718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103718u;
        // 0x10371c: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103718) {
            ctx->pc = 0x1041C8u;
            goto label_1041c8;
        }
    }
    ctx->pc = 0x103720u;
    // 0x103720: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x103720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x103724: 0x10a30296  beq         $a1, $v1, . + 4 + (0x296 << 2)
    ctx->pc = 0x103724u;
    {
        const bool branch_taken_0x103724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103724u;
        // 0x103728: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103724) {
            ctx->pc = 0x104180u;
            goto label_104180;
        }
    }
    ctx->pc = 0x10372Cu;
    // 0x10372c: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x103730: 0x10a30281  beq         $a1, $v1, . + 4 + (0x281 << 2)
    ctx->pc = 0x103730u;
    {
        const bool branch_taken_0x103730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103730u;
        // 0x103734: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103730) {
            ctx->pc = 0x104138u;
            goto label_104138;
        }
    }
    ctx->pc = 0x103738u;
    // 0x103738: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x103738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10373c: 0x10a3026c  beq         $a1, $v1, . + 4 + (0x26C << 2)
    ctx->pc = 0x10373Cu;
    {
        const bool branch_taken_0x10373c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10373Cu;
        // 0x103740: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10373c) {
            ctx->pc = 0x1040F0u;
            goto label_1040f0;
        }
    }
    ctx->pc = 0x103744u;
    // 0x103744: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x103744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x103748: 0x10a30257  beq         $a1, $v1, . + 4 + (0x257 << 2)
    ctx->pc = 0x103748u;
    {
        const bool branch_taken_0x103748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103748u;
        // 0x10374c: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103748) {
            ctx->pc = 0x1040A8u;
            goto label_1040a8;
        }
    }
    ctx->pc = 0x103750u;
    // 0x103750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103754: 0x10a30245  beq         $a1, $v1, . + 4 + (0x245 << 2)
    ctx->pc = 0x103754u;
    {
        const bool branch_taken_0x103754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103754u;
        // 0x103758: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103754) {
            ctx->pc = 0x10406Cu;
            goto label_10406c;
        }
    }
    ctx->pc = 0x10375Cu;
    // 0x10375c: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x10375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x103760: 0x10a30230  beq         $a1, $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x103760u;
    {
        const bool branch_taken_0x103760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103760u;
        // 0x103764: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103760) {
            ctx->pc = 0x104024u;
            goto label_104024;
        }
    }
    ctx->pc = 0x103768u;
    // 0x103768: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x103768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x10376c: 0x10a3021b  beq         $a1, $v1, . + 4 + (0x21B << 2)
    ctx->pc = 0x10376Cu;
    {
        const bool branch_taken_0x10376c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10376Cu;
        // 0x103770: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10376c) {
            ctx->pc = 0x103FDCu;
            goto label_103fdc;
        }
    }
    ctx->pc = 0x103774u;
    // 0x103774: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x103774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x103778: 0x10a30209  beq         $a1, $v1, . + 4 + (0x209 << 2)
    ctx->pc = 0x103778u;
    {
        const bool branch_taken_0x103778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103778u;
        // 0x10377c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103778) {
            ctx->pc = 0x103FA0u;
            goto label_103fa0;
        }
    }
    ctx->pc = 0x103780u;
    // 0x103780: 0x240300cf  addiu       $v1, $zero, 0xCF
    ctx->pc = 0x103780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x103784: 0x10a301f4  beq         $a1, $v1, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x103784u;
    {
        const bool branch_taken_0x103784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103784u;
        // 0x103788: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103784) {
            ctx->pc = 0x103F58u;
            goto label_103f58;
        }
    }
    ctx->pc = 0x10378Cu;
    // 0x10378c: 0x240300ce  addiu       $v1, $zero, 0xCE
    ctx->pc = 0x10378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x103790: 0x10a301e2  beq         $a1, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x103790u;
    {
        const bool branch_taken_0x103790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103790u;
        // 0x103794: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103790) {
            ctx->pc = 0x103F1Cu;
            goto label_103f1c;
        }
    }
    ctx->pc = 0x103798u;
    // 0x103798: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x103798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10379c: 0x10a301d3  beq         $a1, $v1, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x10379Cu;
    {
        const bool branch_taken_0x10379c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10379Cu;
        // 0x1037a0: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10379c) {
            ctx->pc = 0x103EECu;
            goto label_103eec;
        }
    }
    ctx->pc = 0x1037A4u;
    // 0x1037a4: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1037a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1037a8: 0x10a301c4  beq         $a1, $v1, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1037A8u;
    {
        const bool branch_taken_0x1037a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037A8u;
        // 0x1037ac: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037a8) {
            ctx->pc = 0x103EBCu;
            goto label_103ebc;
        }
    }
    ctx->pc = 0x1037B0u;
    // 0x1037b0: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1037b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1037b4: 0x10a301af  beq         $a1, $v1, . + 4 + (0x1AF << 2)
    ctx->pc = 0x1037B4u;
    {
        const bool branch_taken_0x1037b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037B4u;
        // 0x1037b8: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037b4) {
            ctx->pc = 0x103E74u;
            goto label_103e74;
        }
    }
    ctx->pc = 0x1037BCu;
    // 0x1037bc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1037c0: 0x10a3019a  beq         $a1, $v1, . + 4 + (0x19A << 2)
    ctx->pc = 0x1037C0u;
    {
        const bool branch_taken_0x1037c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037C0u;
        // 0x1037c4: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037c0) {
            ctx->pc = 0x103E2Cu;
            goto label_103e2c;
        }
    }
    ctx->pc = 0x1037C8u;
    // 0x1037c8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1037c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1037cc: 0x10a30185  beq         $a1, $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x1037CCu;
    {
        const bool branch_taken_0x1037cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037CCu;
        // 0x1037d0: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037cc) {
            ctx->pc = 0x103DE4u;
            goto label_103de4;
        }
    }
    ctx->pc = 0x1037D4u;
    // 0x1037d4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1037d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1037d8: 0x10a30170  beq         $a1, $v1, . + 4 + (0x170 << 2)
    ctx->pc = 0x1037D8u;
    {
        const bool branch_taken_0x1037d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037D8u;
        // 0x1037dc: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037d8) {
            ctx->pc = 0x103D9Cu;
            goto label_103d9c;
        }
    }
    ctx->pc = 0x1037E0u;
    // 0x1037e0: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x1037e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1037e4: 0x10a3015e  beq         $a1, $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x1037E4u;
    {
        const bool branch_taken_0x1037e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037E4u;
        // 0x1037e8: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037e4) {
            ctx->pc = 0x103D60u;
            goto label_103d60;
        }
    }
    ctx->pc = 0x1037ECu;
    // 0x1037ec: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x1037ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1037f0: 0x10a3014f  beq         $a1, $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x1037F0u;
    {
        const bool branch_taken_0x1037f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037F0u;
        // 0x1037f4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037f0) {
            ctx->pc = 0x103D30u;
            goto label_103d30;
        }
    }
    ctx->pc = 0x1037F8u;
    // 0x1037f8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1037f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1037fc: 0x10a30137  beq         $a1, $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x1037FCu;
    {
        const bool branch_taken_0x1037fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1037FCu;
        // 0x103800: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1037fc) {
            ctx->pc = 0x103CDCu;
            goto label_103cdc;
        }
    }
    ctx->pc = 0x103804u;
    // 0x103804: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x103804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x103808: 0x10a3011f  beq         $a1, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x103808u;
    {
        const bool branch_taken_0x103808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103808u;
        // 0x10380c: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103808) {
            ctx->pc = 0x103C88u;
            goto label_103c88;
        }
    }
    ctx->pc = 0x103810u;
    // 0x103810: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x103810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x103814: 0x10a30109  beq         $a1, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x103814u;
    {
        const bool branch_taken_0x103814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103814u;
        // 0x103818: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103814) {
            ctx->pc = 0x103C3Cu;
            goto label_103c3c;
        }
    }
    ctx->pc = 0x10381Cu;
    // 0x10381c: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x10381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x103820: 0x10a300f4  beq         $a1, $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x103820u;
    {
        const bool branch_taken_0x103820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103820u;
        // 0x103824: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103820) {
            ctx->pc = 0x103BF4u;
            goto label_103bf4;
        }
    }
    ctx->pc = 0x103828u;
    // 0x103828: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x103828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x10382c: 0x10a300df  beq         $a1, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x10382Cu;
    {
        const bool branch_taken_0x10382c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10382Cu;
        // 0x103830: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10382c) {
            ctx->pc = 0x103BACu;
            goto label_103bac;
        }
    }
    ctx->pc = 0x103834u;
    // 0x103834: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x103834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x103838: 0x10a300c8  beq         $a1, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x103838u;
    {
        const bool branch_taken_0x103838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103838u;
        // 0x10383c: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103838) {
            ctx->pc = 0x103B5Cu;
            goto label_103b5c;
        }
    }
    ctx->pc = 0x103840u;
    // 0x103840: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x103840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x103844: 0x10a300af  beq         $a1, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x103844u;
    {
        const bool branch_taken_0x103844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103844u;
        // 0x103848: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103844) {
            ctx->pc = 0x103B04u;
            goto label_103b04;
        }
    }
    ctx->pc = 0x10384Cu;
    // 0x10384c: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x10384cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x103850: 0x10a30099  beq         $a1, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x103850u;
    {
        const bool branch_taken_0x103850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103850u;
        // 0x103854: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103850) {
            ctx->pc = 0x103AB8u;
            goto label_103ab8;
        }
    }
    ctx->pc = 0x103858u;
    // 0x103858: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x103858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x10385c: 0x10a30084  beq         $a1, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x10385Cu;
    {
        const bool branch_taken_0x10385c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10385Cu;
        // 0x103860: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10385c) {
            ctx->pc = 0x103A70u;
            goto label_103a70;
        }
    }
    ctx->pc = 0x103864u;
    // 0x103864: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x103864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x103868: 0x10a3006c  beq         $a1, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x103868u;
    {
        const bool branch_taken_0x103868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103868u;
        // 0x10386c: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103868) {
            ctx->pc = 0x103A1Cu;
            goto label_103a1c;
        }
    }
    ctx->pc = 0x103870u;
    // 0x103870: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x103870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x103874: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x103874u;
    {
        const bool branch_taken_0x103874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103874u;
        // 0x103878: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103874) {
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x10387Cu;
    // 0x10387c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x103880: 0x10a3003c  beq         $a1, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x103880u;
    {
        const bool branch_taken_0x103880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103880u;
        // 0x103884: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103880) {
            ctx->pc = 0x103974u;
            goto label_103974;
        }
    }
    ctx->pc = 0x103888u;
    // 0x103888: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x103888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x10388c: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x10388Cu;
    {
        const bool branch_taken_0x10388c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x103890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10388Cu;
        // 0x103890: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10388c) {
            ctx->pc = 0x103944u;
            goto label_103944;
        }
    }
    ctx->pc = 0x103894u;
    // 0x103894: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x103894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x103898: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x103898u;
    {
        const bool branch_taken_0x103898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103898u;
        // 0x10389c: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103898) {
            ctx->pc = 0x103914u;
            goto label_103914;
        }
    }
    ctx->pc = 0x1038A0u;
    // 0x1038a0: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1038a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1038a4: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1038A4u;
    {
        const bool branch_taken_0x1038a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A4u;
        // 0x1038a8: 0x24040240  addiu       $a0, $zero, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038a4) {
            ctx->pc = 0x1038E4u;
            goto label_1038e4;
        }
    }
    ctx->pc = 0x1038ACu;
    // 0x1038ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1038ACu;
    {
        const bool branch_taken_0x1038ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038ACu;
        // 0x1038b0: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038ac) {
            ctx->pc = 0x1038C0u;
            goto label_1038c0;
        }
    }
    ctx->pc = 0x1038B4u;
    // 0x1038b4: 0x10000659  b           . + 4 + (0x659 << 2)
    ctx->pc = 0x1038B4u;
    {
        const bool branch_taken_0x1038b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038B4u;
        // 0x1038b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038b4) {
            ctx->pc = 0x10521Cu;
            goto label_10521c;
        }
    }
    ctx->pc = 0x1038BCu;
    // 0x1038bc: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1038bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1038c0:
    // 0x1038c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1038C0u, 0x1038C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038C8u;
label_1038c8:
    // 0x1038c8: 0x10400653  beqz        $v0, . + 4 + (0x653 << 2)
    ctx->pc = 0x1038C8u;
    {
        const bool branch_taken_0x1038c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038c8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1038D0u;
    // 0x1038d0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1038D0u;
    SET_GPR_U32(ctx, 31, 0x1038D8u);
    ctx->pc = 0x1038D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038D0u;
    // 0x1038d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1038D0u, 0x1038D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038D8u;
label_1038d8:
    // 0x1038d8: 0x1000064f  b           . + 4 + (0x64F << 2)
    ctx->pc = 0x1038D8u;
    {
        const bool branch_taken_0x1038d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038d8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1038E0u;
    // 0x1038e0: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_1038e4:
    // 0x1038e4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1038E4u;
    SET_GPR_U32(ctx, 31, 0x1038ECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1038E4u, 0x1038ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038ECu;
label_1038ec:
    // 0x1038ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1038ECu;
    {
        const bool branch_taken_0x1038ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038ECu;
        // 0x1038f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038ec) {
            ctx->pc = 0x103908u;
            goto label_103908;
        }
    }
    ctx->pc = 0x1038F4u;
    // 0x1038f4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1038F4u;
    SET_GPR_U32(ctx, 31, 0x1038FCu);
    ctx->pc = 0x1038F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038F4u;
    // 0x1038f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1038F4u, 0x1038FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038FCu;
label_1038fc:
    // 0x1038fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1038fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103900: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x103900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x103904: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103908:
    // 0x103908: 0x10000643  b           . + 4 + (0x643 << 2)
    ctx->pc = 0x103908u;
    {
        const bool branch_taken_0x103908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103908u;
        // 0x10390c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103908) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103910u;
    // 0x103910: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_103914:
    // 0x103914: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103914u;
    SET_GPR_U32(ctx, 31, 0x10391Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103914u, 0x10391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10391Cu;
label_10391c:
    // 0x10391c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10391Cu;
    {
        const bool branch_taken_0x10391c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10391Cu;
        // 0x103920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10391c) {
            ctx->pc = 0x103938u;
            goto label_103938;
        }
    }
    ctx->pc = 0x103924u;
    // 0x103924: 0xc056360  jal         func_158D80
    ctx->pc = 0x103924u;
    SET_GPR_U32(ctx, 31, 0x10392Cu);
    ctx->pc = 0x103928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103924u;
    // 0x103928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103924u, 0x10392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10392Cu;
label_10392c:
    // 0x10392c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103930: 0x24429e30  addiu       $v0, $v0, -0x61D0
    ctx->pc = 0x103930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
    // 0x103934: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103938:
    // 0x103938: 0x10000637  b           . + 4 + (0x637 << 2)
    ctx->pc = 0x103938u;
    {
        const bool branch_taken_0x103938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103938u;
        // 0x10393c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103938) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103940u;
    // 0x103940: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_103944:
    // 0x103944: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103944u;
    SET_GPR_U32(ctx, 31, 0x10394Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103944u, 0x10394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10394Cu;
label_10394c:
    // 0x10394c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10394Cu;
    {
        const bool branch_taken_0x10394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10394Cu;
        // 0x103950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10394c) {
            ctx->pc = 0x103968u;
            goto label_103968;
        }
    }
    ctx->pc = 0x103954u;
    // 0x103954: 0xc056360  jal         func_158D80
    ctx->pc = 0x103954u;
    SET_GPR_U32(ctx, 31, 0x10395Cu);
    ctx->pc = 0x103958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103954u;
    // 0x103958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103954u, 0x10395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10395Cu;
label_10395c:
    // 0x10395c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103960: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x103964: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103968:
    // 0x103968: 0x1000062b  b           . + 4 + (0x62B << 2)
    ctx->pc = 0x103968u;
    {
        const bool branch_taken_0x103968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103968u;
        // 0x10396c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103968) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103970u;
    // 0x103970: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103974:
    // 0x103974: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103974u;
    SET_GPR_U32(ctx, 31, 0x10397Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103974u, 0x10397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10397Cu;
label_10397c:
    // 0x10397c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10397c) {
            ctx->pc = 0x1039BCu;
            goto label_1039bc;
        }
    }
    ctx->pc = 0x103984u;
    // 0x103984: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103984u;
    SET_GPR_U32(ctx, 31, 0x10398Cu);
    ctx->pc = 0x103988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103984u;
    // 0x103988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103984u, 0x10398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10398Cu;
label_10398c:
    // 0x10398c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103990: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103994: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103998: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x10399c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10399cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1039a0: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1039a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1039a4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1039a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1039a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1039ac: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1039acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1039b0: 0xc041874  jal         func_1061D0
    ctx->pc = 0x1039B0u;
    SET_GPR_U32(ctx, 31, 0x1039B8u);
    ctx->pc = 0x1039B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039B0u;
    // 0x1039b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x1039B0u, 0x1039B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039B8u;
label_1039b8:
    // 0x1039b8: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1039b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_1039bc:
    // 0x1039bc: 0x10000616  b           . + 4 + (0x616 << 2)
    ctx->pc = 0x1039BCu;
    {
        const bool branch_taken_0x1039bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039BCu;
        // 0x1039c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039bc) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1039C4u;
    // 0x1039c4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1039c8:
    // 0x1039c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1039C8u;
    SET_GPR_U32(ctx, 31, 0x1039D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1039C8u, 0x1039D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039D0u;
label_1039d0:
    // 0x1039d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1039D0u;
    {
        const bool branch_taken_0x1039d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039D0u;
        // 0x1039d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039d0) {
            ctx->pc = 0x103A10u;
            goto label_103a10;
        }
    }
    ctx->pc = 0x1039D8u;
    // 0x1039d8: 0xc041860  jal         func_106180
    ctx->pc = 0x1039D8u;
    SET_GPR_U32(ctx, 31, 0x1039E0u);
    ctx->pc = 0x1039DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039D8u;
    // 0x1039dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x1039D8u, 0x1039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1039E0u;
label_1039e0:
    // 0x1039e0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1039e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1039e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1039e8: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x1039e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x1039ec: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1039ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1039f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1039f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1039f4: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1039f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1039f8: 0xc041858  jal         func_106160
    ctx->pc = 0x1039F8u;
    SET_GPR_U32(ctx, 31, 0x103A00u);
    ctx->pc = 0x1039FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039F8u;
    // 0x1039fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x1039F8u, 0x103A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A00u;
label_103a00:
    // 0x103a00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103a04: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103a08: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x103a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x103a0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103a10:
    // 0x103a10: 0x10000601  b           . + 4 + (0x601 << 2)
    ctx->pc = 0x103A10u;
    {
        const bool branch_taken_0x103a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A10u;
        // 0x103a14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a10) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103A18u;
    // 0x103a18: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x103a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_103a1c:
    // 0x103a1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103A1Cu;
    SET_GPR_U32(ctx, 31, 0x103A24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103A1Cu, 0x103A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A24u;
label_103a24:
    // 0x103a24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103A24u;
    {
        const bool branch_taken_0x103a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A24u;
        // 0x103a28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a24) {
            ctx->pc = 0x103A64u;
            goto label_103a64;
        }
    }
    ctx->pc = 0x103A2Cu;
    // 0x103a2c: 0xc041860  jal         func_106180
    ctx->pc = 0x103A2Cu;
    SET_GPR_U32(ctx, 31, 0x103A34u);
    ctx->pc = 0x103A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A2Cu;
    // 0x103a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103A2Cu, 0x103A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A34u;
label_103a34:
    // 0x103a34: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103a38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103a3c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103a40: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x103a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x103a44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103a48: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x103a4c: 0xc041858  jal         func_106160
    ctx->pc = 0x103A4Cu;
    SET_GPR_U32(ctx, 31, 0x103A54u);
    ctx->pc = 0x103A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A4Cu;
    // 0x103a50: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x103A4Cu, 0x103A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A54u;
label_103a54:
    // 0x103a54: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103a58: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103a5c: 0x2442aee0  addiu       $v0, $v0, -0x5120
    ctx->pc = 0x103a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946528));
    // 0x103a60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103a64:
    // 0x103a64: 0x100005ec  b           . + 4 + (0x5EC << 2)
    ctx->pc = 0x103A64u;
    {
        const bool branch_taken_0x103a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A64u;
        // 0x103a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a64) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103A6Cu;
    // 0x103a6c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_103a70:
    // 0x103a70: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103A70u;
    SET_GPR_U32(ctx, 31, 0x103A78u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103A70u, 0x103A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A78u;
label_103a78:
    // 0x103a78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103A78u;
    {
        const bool branch_taken_0x103a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A78u;
        // 0x103a7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a78) {
            ctx->pc = 0x103AACu;
            goto label_103aac;
        }
    }
    ctx->pc = 0x103A80u;
    // 0x103a80: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103A80u;
    SET_GPR_U32(ctx, 31, 0x103A88u);
    ctx->pc = 0x103A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A80u;
    // 0x103a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103A80u, 0x103A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A88u;
label_103a88:
    // 0x103a88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103a8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103a90: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103a94: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103a98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103a9c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103aa0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103aa4: 0x24427ed0  addiu       $v0, $v0, 0x7ED0
    ctx->pc = 0x103aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32464));
    // 0x103aa8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103aac:
    // 0x103aac: 0x100005da  b           . + 4 + (0x5DA << 2)
    ctx->pc = 0x103AACu;
    {
        const bool branch_taken_0x103aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AACu;
        // 0x103ab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103aac) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103AB4u;
    // 0x103ab4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x103ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_103ab8:
    // 0x103ab8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103AB8u;
    SET_GPR_U32(ctx, 31, 0x103AC0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103AB8u, 0x103AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AC0u;
label_103ac0:
    // 0x103ac0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103AC0u;
    {
        const bool branch_taken_0x103ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AC0u;
        // 0x103ac4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ac0) {
            ctx->pc = 0x103AF8u;
            goto label_103af8;
        }
    }
    ctx->pc = 0x103AC8u;
    // 0x103ac8: 0xc041860  jal         func_106180
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AC8u;
    // 0x103acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103AC8u, 0x103AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AD0u;
label_103ad0:
    // 0x103ad0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ad4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ad8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103adc: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103ae0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ae4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ae8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103aec: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103af0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103af4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_103af8:
    // 0x103af8: 0x100005c7  b           . + 4 + (0x5C7 << 2)
    ctx->pc = 0x103AF8u;
    {
        const bool branch_taken_0x103af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AF8u;
        // 0x103afc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103af8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103B00u;
    // 0x103b00: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x103b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_103b04:
    // 0x103b04: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103B04u;
    SET_GPR_U32(ctx, 31, 0x103B0Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103B04u, 0x103B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B0Cu;
label_103b0c:
    // 0x103b0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x103B0Cu;
    {
        const bool branch_taken_0x103b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B0Cu;
        // 0x103b10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b0c) {
            ctx->pc = 0x103B50u;
            goto label_103b50;
        }
    }
    ctx->pc = 0x103B14u;
    // 0x103b14: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103B14u;
    SET_GPR_U32(ctx, 31, 0x103B1Cu);
    ctx->pc = 0x103B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B14u;
    // 0x103b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103B14u, 0x103B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B1Cu;
label_103b1c:
    // 0x103b1c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b24: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103b28: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103b2c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b30: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103b34: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103B34u;
    SET_GPR_U32(ctx, 31, 0x103B3Cu);
    ctx->pc = 0x103B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B34u;
    // 0x103b38: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103B34u, 0x103B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B3Cu;
label_103b3c:
    // 0x103b3c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x103b44: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x103b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x103b48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b4c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x103b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_103b50:
    // 0x103b50: 0x100005b1  b           . + 4 + (0x5B1 << 2)
    ctx->pc = 0x103B50u;
    {
        const bool branch_taken_0x103b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B50u;
        // 0x103b54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b50) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103B58u;
    // 0x103b58: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x103b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_103b5c:
    // 0x103b5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103B5Cu;
    SET_GPR_U32(ctx, 31, 0x103B64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103B5Cu, 0x103B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B64u;
label_103b64:
    // 0x103b64: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x103B64u;
    {
        const bool branch_taken_0x103b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B64u;
        // 0x103b68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b64) {
            ctx->pc = 0x103BA0u;
            goto label_103ba0;
        }
    }
    ctx->pc = 0x103B6Cu;
    // 0x103b6c: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103B6Cu;
    SET_GPR_U32(ctx, 31, 0x103B74u);
    ctx->pc = 0x103B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B6Cu;
    // 0x103b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103B6Cu, 0x103B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B74u;
label_103b74:
    // 0x103b74: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103b78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b7c: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103b80: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103b84: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103b88: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103b8c: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103B8Cu;
    SET_GPR_U32(ctx, 31, 0x103B94u);
    ctx->pc = 0x103B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B8Cu;
    // 0x103b90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103B8Cu, 0x103B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B94u;
label_103b94:
    // 0x103b94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103b98: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x103b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x103b9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103ba0:
    // 0x103ba0: 0x1000059d  b           . + 4 + (0x59D << 2)
    ctx->pc = 0x103BA0u;
    {
        const bool branch_taken_0x103ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BA0u;
        // 0x103ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ba0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103BA8u;
    // 0x103ba8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103bac:
    // 0x103bac: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103BACu;
    SET_GPR_U32(ctx, 31, 0x103BB4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103BACu, 0x103BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BB4u;
label_103bb4:
    // 0x103bb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103BB4u;
    {
        const bool branch_taken_0x103bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BB4u;
        // 0x103bb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bb4) {
            ctx->pc = 0x103BE8u;
            goto label_103be8;
        }
    }
    ctx->pc = 0x103BBCu;
    // 0x103bbc: 0xc041860  jal         func_106180
    ctx->pc = 0x103BBCu;
    SET_GPR_U32(ctx, 31, 0x103BC4u);
    ctx->pc = 0x103BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BBCu;
    // 0x103bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103BBCu, 0x103BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BC4u;
label_103bc4:
    // 0x103bc4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103bc8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103bcc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103bd0: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103bd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103bd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103bdc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103be0: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x103be4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103be8:
    // 0x103be8: 0x1000058b  b           . + 4 + (0x58B << 2)
    ctx->pc = 0x103BE8u;
    {
        const bool branch_taken_0x103be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BE8u;
        // 0x103bec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103be8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103BF0u;
    // 0x103bf0: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103bf4:
    // 0x103bf4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103BF4u;
    SET_GPR_U32(ctx, 31, 0x103BFCu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103BF4u, 0x103BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BFCu;
label_103bfc:
    // 0x103bfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103BFCu;
    {
        const bool branch_taken_0x103bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BFCu;
        // 0x103c00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103bfc) {
            ctx->pc = 0x103C30u;
            goto label_103c30;
        }
    }
    ctx->pc = 0x103C04u;
    // 0x103c04: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103C04u;
    SET_GPR_U32(ctx, 31, 0x103C0Cu);
    ctx->pc = 0x103C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C04u;
    // 0x103c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103C04u, 0x103C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C0Cu;
label_103c0c:
    // 0x103c0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c10: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103c14: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x103c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x103c18: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
    // 0x103c1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c20: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c24: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103c28: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x103c2c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103c30:
    // 0x103c30: 0x10000579  b           . + 4 + (0x579 << 2)
    ctx->pc = 0x103C30u;
    {
        const bool branch_taken_0x103c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C30u;
        // 0x103c34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c30) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103C38u;
    // 0x103c38: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x103c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_103c3c:
    // 0x103c3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103C3Cu;
    SET_GPR_U32(ctx, 31, 0x103C44u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103C3Cu, 0x103C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C44u;
label_103c44:
    // 0x103c44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103C44u;
    {
        const bool branch_taken_0x103c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C44u;
        // 0x103c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c44) {
            ctx->pc = 0x103C7Cu;
            goto label_103c7c;
        }
    }
    ctx->pc = 0x103C4Cu;
    // 0x103c4c: 0xc056360  jal         func_158D80
    ctx->pc = 0x103C4Cu;
    SET_GPR_U32(ctx, 31, 0x103C54u);
    ctx->pc = 0x103C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C4Cu;
    // 0x103c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103C4Cu, 0x103C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C54u;
label_103c54:
    // 0x103c54: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c58: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103c5c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x103c60: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x103c64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c6c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103c70: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x103c74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c78: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_103c7c:
    // 0x103c7c: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x103C7Cu;
    {
        const bool branch_taken_0x103c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C7Cu;
        // 0x103c80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c7c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103C84u;
    // 0x103c84: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_103c88:
    // 0x103c88: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103C88u;
    SET_GPR_U32(ctx, 31, 0x103C90u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103C88u, 0x103C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C90u;
label_103c90:
    // 0x103c90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103C90u;
    {
        const bool branch_taken_0x103c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C90u;
        // 0x103c94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c90) {
            ctx->pc = 0x103CD0u;
            goto label_103cd0;
        }
    }
    ctx->pc = 0x103C98u;
    // 0x103c98: 0xc0417d8  jal         func_105F60
    ctx->pc = 0x103C98u;
    SET_GPR_U32(ctx, 31, 0x103CA0u);
    ctx->pc = 0x103C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C98u;
    // 0x103c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F60u, 0x103C98u, 0x103CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CA0u;
label_103ca0:
    // 0x103ca0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ca4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ca8: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103cac: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x103cb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103cb4: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x103cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x103cb8: 0xc0417d4  jal         func_105F50
    ctx->pc = 0x103CB8u;
    SET_GPR_U32(ctx, 31, 0x103CC0u);
    ctx->pc = 0x103CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CB8u;
    // 0x103cbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F50u, 0x103CB8u, 0x103CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CC0u;
label_103cc0:
    // 0x103cc0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103cc4: 0x2442a5b0  addiu       $v0, $v0, -0x5A50
    ctx->pc = 0x103cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944176));
    // 0x103cc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ccc: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x103cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_103cd0:
    // 0x103cd0: 0x10000551  b           . + 4 + (0x551 << 2)
    ctx->pc = 0x103CD0u;
    {
        const bool branch_taken_0x103cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CD0u;
        // 0x103cd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cd0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103CD8u;
    // 0x103cd8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103cdc:
    // 0x103cdc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103CDCu;
    SET_GPR_U32(ctx, 31, 0x103CE4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103CDCu, 0x103CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CE4u;
label_103ce4:
    // 0x103ce4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103CE4u;
    {
        const bool branch_taken_0x103ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CE4u;
        // 0x103ce8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ce4) {
            ctx->pc = 0x103D24u;
            goto label_103d24;
        }
    }
    ctx->pc = 0x103CECu;
    // 0x103cec: 0xc041860  jal         func_106180
    ctx->pc = 0x103CECu;
    SET_GPR_U32(ctx, 31, 0x103CF4u);
    ctx->pc = 0x103CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CECu;
    // 0x103cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103CECu, 0x103CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CF4u;
label_103cf4:
    // 0x103cf4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103cf8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103cfc: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103d00: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x103d04: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103d08: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x103d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x103d0c: 0xc041858  jal         func_106160
    ctx->pc = 0x103D0Cu;
    SET_GPR_U32(ctx, 31, 0x103D14u);
    ctx->pc = 0x103D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D0Cu;
    // 0x103d10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106160u, 0x103D0Cu, 0x103D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D14u;
label_103d14:
    // 0x103d14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103d18: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x103d1c: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x103d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
    // 0x103d20: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103d24:
    // 0x103d24: 0x1000053c  b           . + 4 + (0x53C << 2)
    ctx->pc = 0x103D24u;
    {
        const bool branch_taken_0x103d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D24u;
        // 0x103d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d24) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103D2Cu;
    // 0x103d2c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_103d30:
    // 0x103d30: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103D30u;
    SET_GPR_U32(ctx, 31, 0x103D38u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103D30u, 0x103D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D38u;
label_103d38:
    // 0x103d38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103D38u;
    {
        const bool branch_taken_0x103d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D38u;
        // 0x103d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d38) {
            ctx->pc = 0x103D54u;
            goto label_103d54;
        }
    }
    ctx->pc = 0x103D40u;
    // 0x103d40: 0xc056360  jal         func_158D80
    ctx->pc = 0x103D40u;
    SET_GPR_U32(ctx, 31, 0x103D48u);
    ctx->pc = 0x103D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D40u;
    // 0x103d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103D40u, 0x103D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D48u;
label_103d48:
    // 0x103d48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103d4c: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x103d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x103d50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103d54:
    // 0x103d54: 0x10000530  b           . + 4 + (0x530 << 2)
    ctx->pc = 0x103D54u;
    {
        const bool branch_taken_0x103d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D54u;
        // 0x103d58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d54) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103D5Cu;
    // 0x103d5c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_103d60:
    // 0x103d60: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103D60u;
    SET_GPR_U32(ctx, 31, 0x103D68u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103D60u, 0x103D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D68u;
label_103d68:
    // 0x103d68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103D68u;
    {
        const bool branch_taken_0x103d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D68u;
        // 0x103d6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d68) {
            ctx->pc = 0x103D90u;
            goto label_103d90;
        }
    }
    ctx->pc = 0x103D70u;
    // 0x103d70: 0xc056360  jal         func_158D80
    ctx->pc = 0x103D70u;
    SET_GPR_U32(ctx, 31, 0x103D78u);
    ctx->pc = 0x103D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D70u;
    // 0x103d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103D70u, 0x103D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D78u;
label_103d78:
    // 0x103d78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103d7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103d80: 0x246395f0  addiu       $v1, $v1, -0x6A10
    ctx->pc = 0x103d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940144));
    // 0x103d84: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x103d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x103d88: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103d8c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103d90:
    // 0x103d90: 0x10000521  b           . + 4 + (0x521 << 2)
    ctx->pc = 0x103D90u;
    {
        const bool branch_taken_0x103d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D90u;
        // 0x103d94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d90) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103D98u;
    // 0x103d98: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_103d9c:
    // 0x103d9c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103D9Cu;
    SET_GPR_U32(ctx, 31, 0x103DA4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103D9Cu, 0x103DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DA4u;
label_103da4:
    // 0x103da4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103DA4u;
    {
        const bool branch_taken_0x103da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DA4u;
        // 0x103da8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103da4) {
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103DACu;
    // 0x103dac: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103DACu;
    SET_GPR_U32(ctx, 31, 0x103DB4u);
    ctx->pc = 0x103DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DACu;
    // 0x103db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103DACu, 0x103DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DB4u;
label_103db4:
    // 0x103db4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103db8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103dbc: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103dc0: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103dc4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103dcc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103dd0: 0x244299b0  addiu       $v0, $v0, -0x6650
    ctx->pc = 0x103dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941104));
    // 0x103dd4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103dd8:
    // 0x103dd8: 0x1000050f  b           . + 4 + (0x50F << 2)
    ctx->pc = 0x103DD8u;
    {
        const bool branch_taken_0x103dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD8u;
        // 0x103ddc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103DE0u;
    // 0x103de0: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x103de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_103de4:
    // 0x103de4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103DE4u;
    SET_GPR_U32(ctx, 31, 0x103DECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103DE4u, 0x103DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DECu;
label_103dec:
    // 0x103dec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103DECu;
    {
        const bool branch_taken_0x103dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DECu;
        // 0x103df0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dec) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DF4u;
    // 0x103df4: 0xc041860  jal         func_106180
    ctx->pc = 0x103DF4u;
    SET_GPR_U32(ctx, 31, 0x103DFCu);
    ctx->pc = 0x103DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DF4u;
    // 0x103df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103DF4u, 0x103DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DFCu;
label_103dfc:
    // 0x103dfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e00: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e04: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103e08: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103e0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103e10: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e14: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103e18: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x103e1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103e20:
    // 0x103e20: 0x100004fd  b           . + 4 + (0x4FD << 2)
    ctx->pc = 0x103E20u;
    {
        const bool branch_taken_0x103e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E20u;
        // 0x103e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e20) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103E28u;
    // 0x103e28: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103e2c:
    // 0x103e2c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103E2Cu;
    SET_GPR_U32(ctx, 31, 0x103E34u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103E2Cu, 0x103E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E34u;
label_103e34:
    // 0x103e34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103E34u;
    {
        const bool branch_taken_0x103e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E34u;
        // 0x103e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e34) {
            ctx->pc = 0x103E68u;
            goto label_103e68;
        }
    }
    ctx->pc = 0x103E3Cu;
    // 0x103e3c: 0xc041860  jal         func_106180
    ctx->pc = 0x103E3Cu;
    SET_GPR_U32(ctx, 31, 0x103E44u);
    ctx->pc = 0x103E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E3Cu;
    // 0x103e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103E3Cu, 0x103E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E44u;
label_103e44:
    // 0x103e44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e48: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e4c: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103e50: 0x2463af40  addiu       $v1, $v1, -0x50C0
    ctx->pc = 0x103e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946624));
    // 0x103e54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103e58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103e60: 0x2442afa0  addiu       $v0, $v0, -0x5060
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x103e64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103e68:
    // 0x103e68: 0x100004eb  b           . + 4 + (0x4EB << 2)
    ctx->pc = 0x103E68u;
    {
        const bool branch_taken_0x103e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E68u;
        // 0x103e6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e68) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103E70u;
    // 0x103e70: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_103e74:
    // 0x103e74: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103E74u;
    SET_GPR_U32(ctx, 31, 0x103E7Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103E74u, 0x103E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E7Cu;
label_103e7c:
    // 0x103e7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103E7Cu;
    {
        const bool branch_taken_0x103e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E7Cu;
        // 0x103e80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e7c) {
            ctx->pc = 0x103EB0u;
            goto label_103eb0;
        }
    }
    ctx->pc = 0x103E84u;
    // 0x103e84: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103E84u;
    SET_GPR_U32(ctx, 31, 0x103E8Cu);
    ctx->pc = 0x103E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E84u;
    // 0x103e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103E84u, 0x103E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E8Cu;
label_103e8c:
    // 0x103e8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103e90: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e94: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103e98: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103e9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103ea0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ea4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103ea8: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x103ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x103eac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103eb0:
    // 0x103eb0: 0x100004d9  b           . + 4 + (0x4D9 << 2)
    ctx->pc = 0x103EB0u;
    {
        const bool branch_taken_0x103eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EB0u;
        // 0x103eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103eb0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103EB8u;
    // 0x103eb8: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_103ebc:
    // 0x103ebc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103EBCu;
    SET_GPR_U32(ctx, 31, 0x103EC4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103EBCu, 0x103EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EC4u;
label_103ec4:
    // 0x103ec4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103EC4u;
    {
        const bool branch_taken_0x103ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EC4u;
        // 0x103ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ec4) {
            ctx->pc = 0x103EE0u;
            goto label_103ee0;
        }
    }
    ctx->pc = 0x103ECCu;
    // 0x103ecc: 0xc056360  jal         func_158D80
    ctx->pc = 0x103ECCu;
    SET_GPR_U32(ctx, 31, 0x103ED4u);
    ctx->pc = 0x103ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103ECCu;
    // 0x103ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103ECCu, 0x103ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103ED4u;
label_103ed4:
    // 0x103ed4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103ed8: 0x24427e10  addiu       $v0, $v0, 0x7E10
    ctx->pc = 0x103ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
    // 0x103edc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103ee0:
    // 0x103ee0: 0x100004cd  b           . + 4 + (0x4CD << 2)
    ctx->pc = 0x103EE0u;
    {
        const bool branch_taken_0x103ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EE0u;
        // 0x103ee4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ee0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103EE8u;
    // 0x103ee8: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_103eec:
    // 0x103eec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103EECu;
    SET_GPR_U32(ctx, 31, 0x103EF4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103EECu, 0x103EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EF4u;
label_103ef4:
    // 0x103ef4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103EF4u;
    {
        const bool branch_taken_0x103ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EF4u;
        // 0x103ef8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ef4) {
            ctx->pc = 0x103F10u;
            goto label_103f10;
        }
    }
    ctx->pc = 0x103EFCu;
    // 0x103efc: 0xc056360  jal         func_158D80
    ctx->pc = 0x103EFCu;
    SET_GPR_U32(ctx, 31, 0x103F04u);
    ctx->pc = 0x103F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103EFCu;
    // 0x103f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103EFCu, 0x103F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F04u;
label_103f04:
    // 0x103f04: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f08: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x103f0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103f10:
    // 0x103f10: 0x100004c1  b           . + 4 + (0x4C1 << 2)
    ctx->pc = 0x103F10u;
    {
        const bool branch_taken_0x103f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F10u;
        // 0x103f14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f10) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103F18u;
    // 0x103f18: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103f1c:
    // 0x103f1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103F1Cu;
    SET_GPR_U32(ctx, 31, 0x103F24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103F1Cu, 0x103F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F24u;
label_103f24:
    // 0x103f24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103F24u;
    {
        const bool branch_taken_0x103f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F24u;
        // 0x103f28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f24) {
            ctx->pc = 0x103F4Cu;
            goto label_103f4c;
        }
    }
    ctx->pc = 0x103F2Cu;
    // 0x103f2c: 0xc056360  jal         func_158D80
    ctx->pc = 0x103F2Cu;
    SET_GPR_U32(ctx, 31, 0x103F34u);
    ctx->pc = 0x103F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F2Cu;
    // 0x103f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103F2Cu, 0x103F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F34u;
label_103f34:
    // 0x103f34: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x103f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x103f38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103f3c: 0x24637db0  addiu       $v1, $v1, 0x7DB0
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32176));
    // 0x103f40: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x103f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x103f44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103f48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103f4c:
    // 0x103f4c: 0x100004b2  b           . + 4 + (0x4B2 << 2)
    ctx->pc = 0x103F4Cu;
    {
        const bool branch_taken_0x103f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F4Cu;
        // 0x103f50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f4c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103F54u;
    // 0x103f54: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103f58:
    // 0x103f58: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103F58u;
    SET_GPR_U32(ctx, 31, 0x103F60u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103F58u, 0x103F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F60u;
label_103f60:
    // 0x103f60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103F60u;
    {
        const bool branch_taken_0x103f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F60u;
        // 0x103f64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f60) {
            ctx->pc = 0x103F94u;
            goto label_103f94;
        }
    }
    ctx->pc = 0x103F68u;
    // 0x103f68: 0xc056360  jal         func_158D80
    ctx->pc = 0x103F68u;
    SET_GPR_U32(ctx, 31, 0x103F70u);
    ctx->pc = 0x103F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F68u;
    // 0x103f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103F68u, 0x103F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F70u;
label_103f70:
    // 0x103f70: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f74: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103f78: 0x24427db0  addiu       $v0, $v0, 0x7DB0
    ctx->pc = 0x103f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32176));
    // 0x103f7c: 0x2463a550  addiu       $v1, $v1, -0x5AB0
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944080));
    // 0x103f80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103f84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103f88: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103f8c: 0x24427d50  addiu       $v0, $v0, 0x7D50
    ctx->pc = 0x103f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32080));
    // 0x103f90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103f94:
    // 0x103f94: 0x100004a0  b           . + 4 + (0x4A0 << 2)
    ctx->pc = 0x103F94u;
    {
        const bool branch_taken_0x103f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F94u;
        // 0x103f98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f94) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103F9Cu;
    // 0x103f9c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_103fa0:
    // 0x103fa0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103FA0u;
    SET_GPR_U32(ctx, 31, 0x103FA8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103FA0u, 0x103FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FA8u;
label_103fa8:
    // 0x103fa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103FA8u;
    {
        const bool branch_taken_0x103fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FA8u;
        // 0x103fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fa8) {
            ctx->pc = 0x103FD0u;
            goto label_103fd0;
        }
    }
    ctx->pc = 0x103FB0u;
    // 0x103fb0: 0xc056360  jal         func_158D80
    ctx->pc = 0x103FB0u;
    SET_GPR_U32(ctx, 31, 0x103FB8u);
    ctx->pc = 0x103FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FB0u;
    // 0x103fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103FB0u, 0x103FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FB8u;
label_103fb8:
    // 0x103fb8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103fbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103fc0: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x103fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x103fc4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x103fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x103fc8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103fcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_103fd0:
    // 0x103fd0: 0x10000491  b           . + 4 + (0x491 << 2)
    ctx->pc = 0x103FD0u;
    {
        const bool branch_taken_0x103fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FD0u;
        // 0x103fd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fd0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x103FD8u;
    // 0x103fd8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_103fdc:
    // 0x103fdc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103FDCu;
    SET_GPR_U32(ctx, 31, 0x103FE4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103FDCu, 0x103FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FE4u;
label_103fe4:
    // 0x103fe4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103FE4u;
    {
        const bool branch_taken_0x103fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE4u;
        // 0x103fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe4) {
            ctx->pc = 0x104018u;
            goto label_104018;
        }
    }
    ctx->pc = 0x103FECu;
    // 0x103fec: 0xc056360  jal         func_158D80
    ctx->pc = 0x103FECu;
    SET_GPR_U32(ctx, 31, 0x103FF4u);
    ctx->pc = 0x103FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103FECu;
    // 0x103ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103FECu, 0x103FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103FF4u;
label_103ff4:
    // 0x103ff4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103ff8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103ffc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104000: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104004: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104008: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10400c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104010: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x104010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x104014: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104018:
    // 0x104018: 0x1000047f  b           . + 4 + (0x47F << 2)
    ctx->pc = 0x104018u;
    {
        const bool branch_taken_0x104018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104018u;
        // 0x10401c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104018) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104020u;
    // 0x104020: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104024:
    // 0x104024: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104024u;
    SET_GPR_U32(ctx, 31, 0x10402Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104024u, 0x10402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10402Cu;
label_10402c:
    // 0x10402c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10402Cu;
    {
        const bool branch_taken_0x10402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10402Cu;
        // 0x104030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10402c) {
            ctx->pc = 0x104060u;
            goto label_104060;
        }
    }
    ctx->pc = 0x104034u;
    // 0x104034: 0xc056360  jal         func_158D80
    ctx->pc = 0x104034u;
    SET_GPR_U32(ctx, 31, 0x10403Cu);
    ctx->pc = 0x104038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104034u;
    // 0x104038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104034u, 0x10403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10403Cu;
label_10403c:
    // 0x10403c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10403cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104040: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104044: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104048: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x10404c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10404cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104050: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104054: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104058: 0x24429bf0  addiu       $v0, $v0, -0x6410
    ctx->pc = 0x104058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
    // 0x10405c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104060:
    // 0x104060: 0x1000046d  b           . + 4 + (0x46D << 2)
    ctx->pc = 0x104060u;
    {
        const bool branch_taken_0x104060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104060u;
        // 0x104064: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104060) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104068u;
    // 0x104068: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x104068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_10406c:
    // 0x10406c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10406Cu;
    SET_GPR_U32(ctx, 31, 0x104074u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10406Cu, 0x104074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104074u;
label_104074:
    // 0x104074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104074u;
    {
        const bool branch_taken_0x104074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104074u;
        // 0x104078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104074) {
            ctx->pc = 0x10409Cu;
            goto label_10409c;
        }
    }
    ctx->pc = 0x10407Cu;
    // 0x10407c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10407Cu;
    SET_GPR_U32(ctx, 31, 0x104084u);
    ctx->pc = 0x104080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10407Cu;
    // 0x104080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10407Cu, 0x104084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104084u;
label_104084:
    // 0x104084: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104088: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10408c: 0x24637cf0  addiu       $v1, $v1, 0x7CF0
    ctx->pc = 0x10408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31984));
    // 0x104090: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x104090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x104094: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104098: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10409c:
    // 0x10409c: 0x1000045e  b           . + 4 + (0x45E << 2)
    ctx->pc = 0x10409Cu;
    {
        const bool branch_taken_0x10409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10409Cu;
        // 0x1040a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10409c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1040A4u;
    // 0x1040a4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1040a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1040a8:
    // 0x1040a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1040A8u;
    SET_GPR_U32(ctx, 31, 0x1040B0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1040A8u, 0x1040B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040B0u;
label_1040b0:
    // 0x1040b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1040B0u;
    {
        const bool branch_taken_0x1040b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B0u;
        // 0x1040b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b0) {
            ctx->pc = 0x1040E4u;
            goto label_1040e4;
        }
    }
    ctx->pc = 0x1040B8u;
    // 0x1040b8: 0xc0416b8  jal         func_105AE0
    ctx->pc = 0x1040B8u;
    SET_GPR_U32(ctx, 31, 0x1040C0u);
    ctx->pc = 0x1040BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040B8u;
    // 0x1040bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AE0u, 0x1040B8u, 0x1040C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040C0u;
label_1040c0:
    // 0x1040c0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1040c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1040c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1040c8: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x1040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x1040cc: 0x24637f90  addiu       $v1, $v1, 0x7F90
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32656));
    // 0x1040d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1040d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1040d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1040d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1040d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1040d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1040dc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x1040dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x1040e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1040e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1040e4:
    // 0x1040e4: 0x1000044c  b           . + 4 + (0x44C << 2)
    ctx->pc = 0x1040E4u;
    {
        const bool branch_taken_0x1040e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040E4u;
        // 0x1040e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040e4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1040ECu;
    // 0x1040ec: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1040ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1040f0:
    // 0x1040f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1040F0u;
    SET_GPR_U32(ctx, 31, 0x1040F8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1040F0u, 0x1040F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040F8u;
label_1040f8:
    // 0x1040f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1040F8u;
    {
        const bool branch_taken_0x1040f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040F8u;
        // 0x1040fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040f8) {
            ctx->pc = 0x10412Cu;
            goto label_10412c;
        }
    }
    ctx->pc = 0x104100u;
    // 0x104100: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104100u;
    SET_GPR_U32(ctx, 31, 0x104108u);
    ctx->pc = 0x104104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104100u;
    // 0x104104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104100u, 0x104108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104108u;
label_104108:
    // 0x104108: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10410c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104110: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x104114: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x104114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104118: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10411c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104120: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104124: 0x24429890  addiu       $v0, $v0, -0x6770
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940816));
    // 0x104128: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10412c:
    // 0x10412c: 0x1000043a  b           . + 4 + (0x43A << 2)
    ctx->pc = 0x10412Cu;
    {
        const bool branch_taken_0x10412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10412Cu;
        // 0x104130: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10412c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104134u;
    // 0x104134: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104138:
    // 0x104138: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104138u;
    SET_GPR_U32(ctx, 31, 0x104140u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104138u, 0x104140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104140u;
label_104140:
    // 0x104140: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104140u;
    {
        const bool branch_taken_0x104140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104140u;
        // 0x104144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104140) {
            ctx->pc = 0x104174u;
            goto label_104174;
        }
    }
    ctx->pc = 0x104148u;
    // 0x104148: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104148u;
    SET_GPR_U32(ctx, 31, 0x104150u);
    ctx->pc = 0x10414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104148u;
    // 0x10414c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104148u, 0x104150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104150u;
label_104150:
    // 0x104150: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104154: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104158: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10415c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104160: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104164: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104168: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10416c: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x104170: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104174:
    // 0x104174: 0x10000428  b           . + 4 + (0x428 << 2)
    ctx->pc = 0x104174u;
    {
        const bool branch_taken_0x104174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104174u;
        // 0x104178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104174) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10417Cu;
    // 0x10417c: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104180:
    // 0x104180: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104180u;
    SET_GPR_U32(ctx, 31, 0x104188u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104180u, 0x104188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104188u;
label_104188:
    // 0x104188: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104188u;
    {
        const bool branch_taken_0x104188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104188u;
        // 0x10418c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104188) {
            ctx->pc = 0x1041BCu;
            goto label_1041bc;
        }
    }
    ctx->pc = 0x104190u;
    // 0x104190: 0xc056360  jal         func_158D80
    ctx->pc = 0x104190u;
    SET_GPR_U32(ctx, 31, 0x104198u);
    ctx->pc = 0x104194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104190u;
    // 0x104194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104190u, 0x104198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104198u;
label_104198:
    // 0x104198: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10419c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1041a0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1041a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1041a4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1041a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1041a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1041ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1041b4: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x1041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x1041b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1041bc:
    // 0x1041bc: 0x10000416  b           . + 4 + (0x416 << 2)
    ctx->pc = 0x1041BCu;
    {
        const bool branch_taken_0x1041bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041BCu;
        // 0x1041c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041bc) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1041C4u;
    // 0x1041c4: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x1041c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1041c8:
    // 0x1041c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1041C8u;
    SET_GPR_U32(ctx, 31, 0x1041D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1041C8u, 0x1041D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041D0u;
label_1041d0:
    // 0x1041d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1041D0u;
    {
        const bool branch_taken_0x1041d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041D0u;
        // 0x1041d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041d0) {
            ctx->pc = 0x104204u;
            goto label_104204;
        }
    }
    ctx->pc = 0x1041D8u;
    // 0x1041d8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1041D8u;
    SET_GPR_U32(ctx, 31, 0x1041E0u);
    ctx->pc = 0x1041DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041D8u;
    // 0x1041dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1041D8u, 0x1041E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041E0u;
label_1041e0:
    // 0x1041e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041e4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1041e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1041e8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1041ec: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1041f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1041f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1041f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1041f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1041f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1041fc: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x1041fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
    // 0x104200: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104204:
    // 0x104204: 0x10000404  b           . + 4 + (0x404 << 2)
    ctx->pc = 0x104204u;
    {
        const bool branch_taken_0x104204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104204u;
        // 0x104208: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104204) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10420Cu;
    // 0x10420c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x10420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_104210:
    // 0x104210: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104210u;
    SET_GPR_U32(ctx, 31, 0x104218u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104210u, 0x104218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104218u;
label_104218:
    // 0x104218: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104218u;
    {
        const bool branch_taken_0x104218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104218u;
        // 0x10421c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104218) {
            ctx->pc = 0x104240u;
            goto label_104240;
        }
    }
    ctx->pc = 0x104220u;
    // 0x104220: 0xc056360  jal         func_158D80
    ctx->pc = 0x104220u;
    SET_GPR_U32(ctx, 31, 0x104228u);
    ctx->pc = 0x104224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104220u;
    // 0x104224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104220u, 0x104228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104228u;
label_104228:
    // 0x104228: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10422c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104230: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x104230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x104234: 0x24429d70  addiu       $v0, $v0, -0x6290
    ctx->pc = 0x104234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942064));
    // 0x104238: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10423c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104240:
    // 0x104240: 0x100003f5  b           . + 4 + (0x3F5 << 2)
    ctx->pc = 0x104240u;
    {
        const bool branch_taken_0x104240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104240u;
        // 0x104244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104240) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104248u;
    // 0x104248: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_10424c:
    // 0x10424c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10424Cu;
    SET_GPR_U32(ctx, 31, 0x104254u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10424Cu, 0x104254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104254u;
label_104254:
    // 0x104254: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104254u;
    {
        const bool branch_taken_0x104254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104254u;
        // 0x104258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104254) {
            ctx->pc = 0x104288u;
            goto label_104288;
        }
    }
    ctx->pc = 0x10425Cu;
    // 0x10425c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10425Cu;
    SET_GPR_U32(ctx, 31, 0x104264u);
    ctx->pc = 0x104260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10425Cu;
    // 0x104260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10425Cu, 0x104264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104264u;
label_104264:
    // 0x104264: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104268: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10426c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104270: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104274: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104278: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10427c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104280: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x104280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x104284: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104288:
    // 0x104288: 0x100003e3  b           . + 4 + (0x3E3 << 2)
    ctx->pc = 0x104288u;
    {
        const bool branch_taken_0x104288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104288u;
        // 0x10428c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104288) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104290u;
    // 0x104290: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104294:
    // 0x104294: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104294u;
    SET_GPR_U32(ctx, 31, 0x10429Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104294u, 0x10429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10429Cu;
    {
        const bool branch_taken_0x10429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10429Cu;
        // 0x1042a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10429c) {
            ctx->pc = 0x1042D0u;
            goto label_1042d0;
        }
    }
    ctx->pc = 0x1042A4u;
    // 0x1042a4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1042A4u;
    SET_GPR_U32(ctx, 31, 0x1042ACu);
    ctx->pc = 0x1042A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A4u;
    // 0x1042a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1042A4u, 0x1042ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042ACu;
label_1042ac:
    // 0x1042ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042b0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1042b4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1042b8: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x1042bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1042bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1042c0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042c4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1042c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1042c8: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x1042c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x1042cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1042ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1042d0:
    // 0x1042d0: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x1042D0u;
    {
        const bool branch_taken_0x1042d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042D0u;
        // 0x1042d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042d0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1042D8u;
    // 0x1042d8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1042dc:
    // 0x1042dc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1042DCu;
    SET_GPR_U32(ctx, 31, 0x1042E4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1042DCu, 0x1042E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042E4u;
label_1042e4:
    // 0x1042e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1042E4u;
    {
        const bool branch_taken_0x1042e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042E4u;
        // 0x1042e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042e4) {
            ctx->pc = 0x104318u;
            goto label_104318;
        }
    }
    ctx->pc = 0x1042ECu;
    // 0x1042ec: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1042ECu;
    SET_GPR_U32(ctx, 31, 0x1042F4u);
    ctx->pc = 0x1042F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042ECu;
    // 0x1042f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1042ECu, 0x1042F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042F4u;
label_1042f4:
    // 0x1042f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042f8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1042f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1042fc: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104300: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x104300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x104304: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104308: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10430c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10430cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104310: 0x2442a0d0  addiu       $v0, $v0, -0x5F30
    ctx->pc = 0x104310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942928));
    // 0x104314: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104318:
    // 0x104318: 0x100003bf  b           . + 4 + (0x3BF << 2)
    ctx->pc = 0x104318u;
    {
        const bool branch_taken_0x104318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104318u;
        // 0x10431c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104318) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104320u;
    // 0x104320: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104324:
    // 0x104324: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104324u;
    SET_GPR_U32(ctx, 31, 0x10432Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104324u, 0x10432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10432Cu;
label_10432c:
    // 0x10432c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10432Cu;
    {
        const bool branch_taken_0x10432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10432Cu;
        // 0x104330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10432c) {
            ctx->pc = 0x104360u;
            goto label_104360;
        }
    }
    ctx->pc = 0x104334u;
    // 0x104334: 0xc056360  jal         func_158D80
    ctx->pc = 0x104334u;
    SET_GPR_U32(ctx, 31, 0x10433Cu);
    ctx->pc = 0x104338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104334u;
    // 0x104338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104334u, 0x10433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10433Cu;
label_10433c:
    // 0x10433c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104340: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104344: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104348: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x10434c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10434cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104350: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104354: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104358: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x104358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x10435c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10435cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104360:
    // 0x104360: 0x100003ad  b           . + 4 + (0x3AD << 2)
    ctx->pc = 0x104360u;
    {
        const bool branch_taken_0x104360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104360u;
        // 0x104364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104360) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104368u;
    // 0x104368: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_10436c:
    // 0x10436c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10436Cu;
    SET_GPR_U32(ctx, 31, 0x104374u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10436Cu, 0x104374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104374u;
label_104374:
    // 0x104374: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104374u;
    {
        const bool branch_taken_0x104374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104374u;
        // 0x104378: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104374) {
            ctx->pc = 0x1043A8u;
            goto label_1043a8;
        }
    }
    ctx->pc = 0x10437Cu;
    // 0x10437c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10437Cu;
    SET_GPR_U32(ctx, 31, 0x104384u);
    ctx->pc = 0x104380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10437Cu;
    // 0x104380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10437Cu, 0x104384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104384u;
label_104384:
    // 0x104384: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104388: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10438c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104390: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104394: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104398: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10439c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1043a0: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x1043a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x1043a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1043a8:
    // 0x1043a8: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x1043A8u;
    {
        const bool branch_taken_0x1043a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043A8u;
        // 0x1043ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043a8) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1043B0u;
    // 0x1043b0: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1043b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1043b4:
    // 0x1043b4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1043B4u;
    SET_GPR_U32(ctx, 31, 0x1043BCu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1043B4u, 0x1043BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043BCu;
label_1043bc:
    // 0x1043bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1043BCu;
    {
        const bool branch_taken_0x1043bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043BCu;
        // 0x1043c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043bc) {
            ctx->pc = 0x1043F0u;
            goto label_1043f0;
        }
    }
    ctx->pc = 0x1043C4u;
    // 0x1043c4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1043C4u;
    SET_GPR_U32(ctx, 31, 0x1043CCu);
    ctx->pc = 0x1043C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043C4u;
    // 0x1043c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1043C4u, 0x1043CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043CCu;
label_1043cc:
    // 0x1043cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1043d0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1043d4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1043d8: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x1043d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x1043dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1043e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1043e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1043e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1043e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1043e8: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x1043ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1043f0:
    // 0x1043f0: 0x10000389  b           . + 4 + (0x389 << 2)
    ctx->pc = 0x1043F0u;
    {
        const bool branch_taken_0x1043f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043F0u;
        // 0x1043f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043f0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1043F8u;
    // 0x1043f8: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1043fc:
    // 0x1043fc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1043FCu;
    SET_GPR_U32(ctx, 31, 0x104404u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1043FCu, 0x104404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104404u;
label_104404:
    // 0x104404: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104404u;
    {
        const bool branch_taken_0x104404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104404u;
        // 0x104408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104404) {
            ctx->pc = 0x104438u;
            goto label_104438;
        }
    }
    ctx->pc = 0x10440Cu;
    // 0x10440c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10440Cu;
    SET_GPR_U32(ctx, 31, 0x104414u);
    ctx->pc = 0x104410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10440Cu;
    // 0x104410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10440Cu, 0x104414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104414u;
label_104414:
    // 0x104414: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104418: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10441c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104420: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104424: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104428: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10442c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10442cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104430: 0x24429e90  addiu       $v0, $v0, -0x6170
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942352));
    // 0x104434: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104438:
    // 0x104438: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x104438u;
    {
        const bool branch_taken_0x104438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104438u;
        // 0x10443c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104438) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104440u;
    // 0x104440: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x104440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_104444:
    // 0x104444: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104444u;
    SET_GPR_U32(ctx, 31, 0x10444Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104444u, 0x10444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10444Cu;
label_10444c:
    // 0x10444c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10444Cu;
    {
        const bool branch_taken_0x10444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10444Cu;
        // 0x104450: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10444c) {
            ctx->pc = 0x104474u;
            goto label_104474;
        }
    }
    ctx->pc = 0x104454u;
    // 0x104454: 0xc056360  jal         func_158D80
    ctx->pc = 0x104454u;
    SET_GPR_U32(ctx, 31, 0x10445Cu);
    ctx->pc = 0x104458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104454u;
    // 0x104458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104454u, 0x10445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10445Cu;
label_10445c:
    // 0x10445c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10445cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104460: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104464: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x104464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x104468: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x104468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x10446c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104470: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104474:
    // 0x104474: 0x10000368  b           . + 4 + (0x368 << 2)
    ctx->pc = 0x104474u;
    {
        const bool branch_taken_0x104474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104474u;
        // 0x104478: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104474) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10447Cu;
    // 0x10447c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x10447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_104480:
    // 0x104480: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104480u;
    SET_GPR_U32(ctx, 31, 0x104488u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104480u, 0x104488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104488u;
label_104488:
    // 0x104488: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104488u;
    {
        const bool branch_taken_0x104488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104488u;
        // 0x10448c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104488) {
            ctx->pc = 0x1044BCu;
            goto label_1044bc;
        }
    }
    ctx->pc = 0x104490u;
    // 0x104490: 0xc056360  jal         func_158D80
    ctx->pc = 0x104490u;
    SET_GPR_U32(ctx, 31, 0x104498u);
    ctx->pc = 0x104494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104490u;
    // 0x104494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104490u, 0x104498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104498u;
label_104498:
    // 0x104498: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10449c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10449cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1044a0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1044a4: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x1044a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x1044a8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1044a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1044ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1044acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1044b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1044b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1044b4: 0x2442a7f0  addiu       $v0, $v0, -0x5810
    ctx->pc = 0x1044b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x1044b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1044b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1044bc:
    // 0x1044bc: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x1044BCu;
    {
        const bool branch_taken_0x1044bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044BCu;
        // 0x1044c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044bc) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1044C4u;
    // 0x1044c4: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1044c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1044c8:
    // 0x1044c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1044C8u;
    SET_GPR_U32(ctx, 31, 0x1044D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1044C8u, 0x1044D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044D0u;
label_1044d0:
    // 0x1044d0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1044D0u;
    {
        const bool branch_taken_0x1044d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D0u;
        // 0x1044d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044d0) {
            ctx->pc = 0x104504u;
            goto label_104504;
        }
    }
    ctx->pc = 0x1044D8u;
    // 0x1044d8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1044D8u;
    SET_GPR_U32(ctx, 31, 0x1044E0u);
    ctx->pc = 0x1044DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044D8u;
    // 0x1044dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1044D8u, 0x1044E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044E0u;
label_1044e0:
    // 0x1044e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1044e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1044e4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1044e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1044e8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1044e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1044ec: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1044f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1044f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1044f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1044f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1044f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1044f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1044fc: 0x2442a910  addiu       $v0, $v0, -0x56F0
    ctx->pc = 0x1044fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945040));
    // 0x104500: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104504:
    // 0x104504: 0x10000344  b           . + 4 + (0x344 << 2)
    ctx->pc = 0x104504u;
    {
        const bool branch_taken_0x104504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104504u;
        // 0x104508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104504) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10450Cu;
    // 0x10450c: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x10450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104510:
    // 0x104510: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104510u;
    SET_GPR_U32(ctx, 31, 0x104518u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104510u, 0x104518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104518u;
label_104518:
    // 0x104518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104518u;
    {
        const bool branch_taken_0x104518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104518u;
        // 0x10451c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104518) {
            ctx->pc = 0x10454Cu;
            goto label_10454c;
        }
    }
    ctx->pc = 0x104520u;
    // 0x104520: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104520u;
    SET_GPR_U32(ctx, 31, 0x104528u);
    ctx->pc = 0x104524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104520u;
    // 0x104524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104520u, 0x104528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10452c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104530: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104534: 0x2463a910  addiu       $v1, $v1, -0x56F0
    ctx->pc = 0x104534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945040));
    // 0x104538: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10453c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10453cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104540: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104544: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
    // 0x104548: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10454c:
    // 0x10454c: 0x10000332  b           . + 4 + (0x332 << 2)
    ctx->pc = 0x10454Cu;
    {
        const bool branch_taken_0x10454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10454Cu;
        // 0x104550: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10454c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104554u;
    // 0x104554: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_104558:
    // 0x104558: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104558u;
    SET_GPR_U32(ctx, 31, 0x104560u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104558u, 0x104560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104560u;
label_104560:
    // 0x104560: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104560u;
    {
        const bool branch_taken_0x104560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104560u;
        // 0x104564: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104560) {
            ctx->pc = 0x104594u;
            goto label_104594;
        }
    }
    ctx->pc = 0x104568u;
    // 0x104568: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104568u;
    SET_GPR_U32(ctx, 31, 0x104570u);
    ctx->pc = 0x10456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104568u;
    // 0x10456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104568u, 0x104570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104570u;
label_104570:
    // 0x104570: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104574: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104578: 0x2442a8b0  addiu       $v0, $v0, -0x5750
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944944));
    // 0x10457c: 0x2463a7f0  addiu       $v1, $v1, -0x5810
    ctx->pc = 0x10457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944752));
    // 0x104580: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104584: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104588: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10458c: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x104590: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104594:
    // 0x104594: 0x10000320  b           . + 4 + (0x320 << 2)
    ctx->pc = 0x104594u;
    {
        const bool branch_taken_0x104594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104594u;
        // 0x104598: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104594) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10459Cu;
    // 0x10459c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x10459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1045a0:
    // 0x1045a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1045A0u;
    SET_GPR_U32(ctx, 31, 0x1045A8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1045A0u, 0x1045A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045A8u;
label_1045a8:
    // 0x1045a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1045A8u;
    {
        const bool branch_taken_0x1045a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045A8u;
        // 0x1045ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045a8) {
            ctx->pc = 0x1045DCu;
            goto label_1045dc;
        }
    }
    ctx->pc = 0x1045B0u;
    // 0x1045b0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1045B0u;
    SET_GPR_U32(ctx, 31, 0x1045B8u);
    ctx->pc = 0x1045B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045B0u;
    // 0x1045b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1045B0u, 0x1045B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045B8u;
label_1045b8:
    // 0x1045b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1045bc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1045bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1045c0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1045c4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1045c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1045c8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1045c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1045cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1045ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1045d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1045d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1045d4: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x1045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x1045d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1045d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1045dc:
    // 0x1045dc: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x1045DCu;
    {
        const bool branch_taken_0x1045dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045DCu;
        // 0x1045e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045dc) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1045E4u;
    // 0x1045e4: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x1045e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_1045e8:
    // 0x1045e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1045E8u;
    SET_GPR_U32(ctx, 31, 0x1045F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1045E8u, 0x1045F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045F0u;
label_1045f0:
    // 0x1045f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1045F0u;
    {
        const bool branch_taken_0x1045f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045F0u;
        // 0x1045f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045f0) {
            ctx->pc = 0x104624u;
            goto label_104624;
        }
    }
    ctx->pc = 0x1045F8u;
    // 0x1045f8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1045F8u;
    SET_GPR_U32(ctx, 31, 0x104600u);
    ctx->pc = 0x1045FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045F8u;
    // 0x1045fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1045F8u, 0x104600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104600u;
label_104600:
    // 0x104600: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104604: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104608: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x10460c: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x10460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
    // 0x104610: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104614: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104618: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10461c: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x104620: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104624:
    // 0x104624: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x104624u;
    {
        const bool branch_taken_0x104624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104624u;
        // 0x104628: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104624) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10462Cu;
    // 0x10462c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_104630:
    // 0x104630: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104630u;
    SET_GPR_U32(ctx, 31, 0x104638u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104630u, 0x104638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104638u;
label_104638:
    // 0x104638: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104638u;
    {
        const bool branch_taken_0x104638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104638u;
        // 0x10463c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104638) {
            ctx->pc = 0x10466Cu;
            goto label_10466c;
        }
    }
    ctx->pc = 0x104640u;
    // 0x104640: 0xc04161c  jal         func_105870
    ctx->pc = 0x104640u;
    SET_GPR_U32(ctx, 31, 0x104648u);
    ctx->pc = 0x104644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104640u;
    // 0x104644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x104640u, 0x104648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104648u;
label_104648:
    // 0x104648: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10464c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104650: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x104650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x104654: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x104658: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10465c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104660: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104664: 0x2442a370  addiu       $v0, $v0, -0x5C90
    ctx->pc = 0x104664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x104668: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10466c:
    // 0x10466c: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x10466Cu;
    {
        const bool branch_taken_0x10466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10466Cu;
        // 0x104670: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10466c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104674u;
    // 0x104674: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104678:
    // 0x104678: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104678u;
    SET_GPR_U32(ctx, 31, 0x104680u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104678u, 0x104680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104680u;
label_104680:
    // 0x104680: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104680u;
    {
        const bool branch_taken_0x104680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104680u;
        // 0x104684: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104680) {
            ctx->pc = 0x1046B4u;
            goto label_1046b4;
        }
    }
    ctx->pc = 0x104688u;
    // 0x104688: 0xc04161c  jal         func_105870
    ctx->pc = 0x104688u;
    SET_GPR_U32(ctx, 31, 0x104690u);
    ctx->pc = 0x10468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104688u;
    // 0x10468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x104688u, 0x104690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104690u;
label_104690:
    // 0x104690: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104694: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104698: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x104698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x10469c: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x10469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x1046a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1046a4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1046a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1046a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1046ac: 0x24427c90  addiu       $v0, $v0, 0x7C90
    ctx->pc = 0x1046acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31888));
    // 0x1046b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1046b4:
    // 0x1046b4: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x1046B4u;
    {
        const bool branch_taken_0x1046b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046B4u;
        // 0x1046b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046b4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1046BCu;
    // 0x1046bc: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1046bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1046c0:
    // 0x1046c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1046C0u;
    SET_GPR_U32(ctx, 31, 0x1046C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1046C0u, 0x1046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046C8u;
label_1046c8:
    // 0x1046c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1046C8u;
    {
        const bool branch_taken_0x1046c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046C8u;
        // 0x1046cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046c8) {
            ctx->pc = 0x1046E4u;
            goto label_1046e4;
        }
    }
    ctx->pc = 0x1046D0u;
    // 0x1046d0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1046D0u;
    SET_GPR_U32(ctx, 31, 0x1046D8u);
    ctx->pc = 0x1046D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046D0u;
    // 0x1046d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1046D0u, 0x1046D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046D8u;
label_1046d8:
    // 0x1046d8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1046dc: 0x24427c30  addiu       $v0, $v0, 0x7C30
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31792));
    // 0x1046e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1046e4:
    // 0x1046e4: 0x100002cc  b           . + 4 + (0x2CC << 2)
    ctx->pc = 0x1046E4u;
    {
        const bool branch_taken_0x1046e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E4u;
        // 0x1046e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046e4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1046ECu;
    // 0x1046ec: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x1046ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_1046f0:
    // 0x1046f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1046F0u;
    SET_GPR_U32(ctx, 31, 0x1046F8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1046F0u, 0x1046F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046F8u;
label_1046f8:
    // 0x1046f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1046F8u;
    {
        const bool branch_taken_0x1046f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046F8u;
        // 0x1046fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046f8) {
            ctx->pc = 0x104720u;
            goto label_104720;
        }
    }
    ctx->pc = 0x104700u;
    // 0x104700: 0xc056360  jal         func_158D80
    ctx->pc = 0x104700u;
    SET_GPR_U32(ctx, 31, 0x104708u);
    ctx->pc = 0x104704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104700u;
    // 0x104704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104700u, 0x104708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104708u;
label_104708:
    // 0x104708: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10470c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104710: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x104710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x104714: 0x24429b90  addiu       $v0, $v0, -0x6470
    ctx->pc = 0x104714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941584));
    // 0x104718: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10471c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104720:
    // 0x104720: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x104720u;
    {
        const bool branch_taken_0x104720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104720u;
        // 0x104724: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104720) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104728u;
    // 0x104728: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_10472c:
    // 0x10472c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10472Cu;
    SET_GPR_U32(ctx, 31, 0x104734u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10472Cu, 0x104734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104734u;
label_104734:
    // 0x104734: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104734u;
    {
        const bool branch_taken_0x104734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104734u;
        // 0x104738: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104734) {
            ctx->pc = 0x10475Cu;
            goto label_10475c;
        }
    }
    ctx->pc = 0x10473Cu;
    // 0x10473c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10473Cu;
    SET_GPR_U32(ctx, 31, 0x104744u);
    ctx->pc = 0x104740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10473Cu;
    // 0x104740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10473Cu, 0x104744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104744u;
label_104744:
    // 0x104744: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104748: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10474c: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x10474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x104750: 0x24429b30  addiu       $v0, $v0, -0x64D0
    ctx->pc = 0x104750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941488));
    // 0x104754: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104758: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10475c:
    // 0x10475c: 0x100002ae  b           . + 4 + (0x2AE << 2)
    ctx->pc = 0x10475Cu;
    {
        const bool branch_taken_0x10475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10475Cu;
        // 0x104760: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10475c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104764u;
    // 0x104764: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_104768:
    // 0x104768: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104768u;
    SET_GPR_U32(ctx, 31, 0x104770u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104768u, 0x104770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104770u;
label_104770:
    // 0x104770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104770u;
    {
        const bool branch_taken_0x104770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104770u;
        // 0x104774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104770) {
            ctx->pc = 0x104798u;
            goto label_104798;
        }
    }
    ctx->pc = 0x104778u;
    // 0x104778: 0xc056360  jal         func_158D80
    ctx->pc = 0x104778u;
    SET_GPR_U32(ctx, 31, 0x104780u);
    ctx->pc = 0x10477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104778u;
    // 0x10477c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104778u, 0x104780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104780u;
label_104780:
    // 0x104780: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104784: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104788: 0x24639ad0  addiu       $v1, $v1, -0x6530
    ctx->pc = 0x104788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941392));
    // 0x10478c: 0x2442a9d0  addiu       $v0, $v0, -0x5630
    ctx->pc = 0x10478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x104790: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104794: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104798:
    // 0x104798: 0x1000029f  b           . + 4 + (0x29F << 2)
    ctx->pc = 0x104798u;
    {
        const bool branch_taken_0x104798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104798u;
        // 0x10479c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104798) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1047A0u;
    // 0x1047a0: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1047a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1047a4:
    // 0x1047a4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1047A4u;
    SET_GPR_U32(ctx, 31, 0x1047ACu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1047A4u, 0x1047ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047ACu;
label_1047ac:
    // 0x1047ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1047ACu;
    {
        const bool branch_taken_0x1047ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047ACu;
        // 0x1047b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047ac) {
            ctx->pc = 0x1047E0u;
            goto label_1047e0;
        }
    }
    ctx->pc = 0x1047B4u;
    // 0x1047b4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1047B4u;
    SET_GPR_U32(ctx, 31, 0x1047BCu);
    ctx->pc = 0x1047B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047B4u;
    // 0x1047b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1047B4u, 0x1047BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047BCu;
label_1047bc:
    // 0x1047bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1047c0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1047c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1047c4: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1047c8: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1047cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1047ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1047d0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1047d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1047d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1047d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1047d8: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x1047dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1047dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1047e0:
    // 0x1047e0: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x1047E0u;
    {
        const bool branch_taken_0x1047e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047E0u;
        // 0x1047e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047e0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1047E8u;
    // 0x1047e8: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1047e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1047ec:
    // 0x1047ec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1047ECu;
    SET_GPR_U32(ctx, 31, 0x1047F4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1047ECu, 0x1047F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047F4u;
label_1047f4:
    // 0x1047f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1047F4u;
    {
        const bool branch_taken_0x1047f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047F4u;
        // 0x1047f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047f4) {
            ctx->pc = 0x104810u;
            goto label_104810;
        }
    }
    ctx->pc = 0x1047FCu;
    // 0x1047fc: 0xc056360  jal         func_158D80
    ctx->pc = 0x1047FCu;
    SET_GPR_U32(ctx, 31, 0x104804u);
    ctx->pc = 0x104800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047FCu;
    // 0x104800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1047FCu, 0x104804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104804u;
label_104804:
    // 0x104804: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104808: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x104808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x10480c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10480cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104810:
    // 0x104810: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x104810u;
    {
        const bool branch_taken_0x104810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104810u;
        // 0x104814: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104810) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104818u;
    // 0x104818: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_10481c:
    // 0x10481c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10481Cu;
    SET_GPR_U32(ctx, 31, 0x104824u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10481Cu, 0x104824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104824u;
label_104824:
    // 0x104824: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104824u;
    {
        const bool branch_taken_0x104824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104824u;
        // 0x104828: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104824) {
            ctx->pc = 0x10484Cu;
            goto label_10484c;
        }
    }
    ctx->pc = 0x10482Cu;
    // 0x10482c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10482Cu;
    SET_GPR_U32(ctx, 31, 0x104834u);
    ctx->pc = 0x104830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10482Cu;
    // 0x104830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10482Cu, 0x104834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104834u;
label_104834:
    // 0x104834: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104838: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10483c: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x10483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x104840: 0x24427b70  addiu       $v0, $v0, 0x7B70
    ctx->pc = 0x104840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31600));
    // 0x104844: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104848: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10484c:
    // 0x10484c: 0x10000272  b           . + 4 + (0x272 << 2)
    ctx->pc = 0x10484Cu;
    {
        const bool branch_taken_0x10484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10484Cu;
        // 0x104850: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10484c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104854u;
    // 0x104854: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104858:
    // 0x104858: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104858u;
    SET_GPR_U32(ctx, 31, 0x104860u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104858u, 0x104860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104860u;
label_104860:
    // 0x104860: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104860u;
    {
        const bool branch_taken_0x104860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104860u;
        // 0x104864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104860) {
            ctx->pc = 0x104888u;
            goto label_104888;
        }
    }
    ctx->pc = 0x104868u;
    // 0x104868: 0xc056360  jal         func_158D80
    ctx->pc = 0x104868u;
    SET_GPR_U32(ctx, 31, 0x104870u);
    ctx->pc = 0x10486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104868u;
    // 0x10486c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104868u, 0x104870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104870u;
label_104870:
    // 0x104870: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104878: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x104878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x10487c: 0x24427b10  addiu       $v0, $v0, 0x7B10
    ctx->pc = 0x10487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31504));
    // 0x104880: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104884: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104888:
    // 0x104888: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x104888u;
    {
        const bool branch_taken_0x104888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104888u;
        // 0x10488c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104888) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104890u;
    // 0x104890: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104894:
    // 0x104894: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104894u;
    SET_GPR_U32(ctx, 31, 0x10489Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104894u, 0x10489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10489Cu;
label_10489c:
    // 0x10489c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10489Cu;
    {
        const bool branch_taken_0x10489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10489Cu;
        // 0x1048a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10489c) {
            ctx->pc = 0x1048C4u;
            goto label_1048c4;
        }
    }
    ctx->pc = 0x1048A4u;
    // 0x1048a4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1048A4u;
    SET_GPR_U32(ctx, 31, 0x1048ACu);
    ctx->pc = 0x1048A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048A4u;
    // 0x1048a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1048A4u, 0x1048ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048ACu;
label_1048ac:
    // 0x1048ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1048b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1048b4: 0x24637bd0  addiu       $v1, $v1, 0x7BD0
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31696));
    // 0x1048b8: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x1048bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1048bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1048c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1048c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1048c4:
    // 0x1048c4: 0x10000254  b           . + 4 + (0x254 << 2)
    ctx->pc = 0x1048C4u;
    {
        const bool branch_taken_0x1048c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048C4u;
        // 0x1048c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048c4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1048CCu;
    // 0x1048cc: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1048ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1048d0:
    // 0x1048d0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1048D0u;
    SET_GPR_U32(ctx, 31, 0x1048D8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1048D0u, 0x1048D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048D8u;
label_1048d8:
    // 0x1048d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1048D8u;
    {
        const bool branch_taken_0x1048d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048D8u;
        // 0x1048dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048d8) {
            ctx->pc = 0x10490Cu;
            goto label_10490c;
        }
    }
    ctx->pc = 0x1048E0u;
    // 0x1048e0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1048E0u;
    SET_GPR_U32(ctx, 31, 0x1048E8u);
    ctx->pc = 0x1048E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048E0u;
    // 0x1048e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1048E0u, 0x1048E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1048E8u;
label_1048e8:
    // 0x1048e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1048ec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1048f0: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1048f4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1048f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1048f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1048f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1048fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1048fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104900: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104904: 0x24429d10  addiu       $v0, $v0, -0x62F0
    ctx->pc = 0x104904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941968));
    // 0x104908: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10490c:
    // 0x10490c: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x10490Cu;
    {
        const bool branch_taken_0x10490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10490Cu;
        // 0x104910: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10490c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104914u;
    // 0x104914: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104918:
    // 0x104918: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104918u;
    SET_GPR_U32(ctx, 31, 0x104920u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104918u, 0x104920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104920u;
label_104920:
    // 0x104920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104920u;
    {
        const bool branch_taken_0x104920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104920u;
        // 0x104924: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104920) {
            ctx->pc = 0x10493Cu;
            goto label_10493c;
        }
    }
    ctx->pc = 0x104928u;
    // 0x104928: 0xc056360  jal         func_158D80
    ctx->pc = 0x104928u;
    SET_GPR_U32(ctx, 31, 0x104930u);
    ctx->pc = 0x10492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104928u;
    // 0x10492c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104928u, 0x104930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104930u;
label_104930:
    // 0x104930: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104934: 0x2442b0c0  addiu       $v0, $v0, -0x4F40
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x104938: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10493c:
    // 0x10493c: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x10493Cu;
    {
        const bool branch_taken_0x10493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10493Cu;
        // 0x104940: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10493c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104944u;
    // 0x104944: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_104948:
    // 0x104948: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104948u;
    SET_GPR_U32(ctx, 31, 0x104950u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104948u, 0x104950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104950u;
label_104950:
    // 0x104950: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104950u;
    {
        const bool branch_taken_0x104950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104950u;
        // 0x104954: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104950) {
            ctx->pc = 0x104984u;
            goto label_104984;
        }
    }
    ctx->pc = 0x104958u;
    // 0x104958: 0xc0418dc  jal         func_106370
    ctx->pc = 0x104958u;
    SET_GPR_U32(ctx, 31, 0x104960u);
    ctx->pc = 0x10495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104958u;
    // 0x10495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x104958u, 0x104960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104960u;
label_104960:
    // 0x104960: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104964: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104968: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x104968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10496c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x104970: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104974: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104978: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10497c: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x10497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x104980: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104984:
    // 0x104984: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x104984u;
    {
        const bool branch_taken_0x104984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104984u;
        // 0x104988: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104984) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x10498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_104990:
    // 0x104990: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104990u;
    SET_GPR_U32(ctx, 31, 0x104998u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104990u, 0x104998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104998u;
label_104998:
    // 0x104998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104998u;
    {
        const bool branch_taken_0x104998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104998u;
        // 0x10499c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104998) {
            ctx->pc = 0x1049C0u;
            goto label_1049c0;
        }
    }
    ctx->pc = 0x1049A0u;
    // 0x1049a0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1049A0u;
    SET_GPR_U32(ctx, 31, 0x1049A8u);
    ctx->pc = 0x1049A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049A0u;
    // 0x1049a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1049A0u, 0x1049A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049A8u;
label_1049a8:
    // 0x1049a8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1049ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049b0: 0x2463ae80  addiu       $v1, $v1, -0x5180
    ctx->pc = 0x1049b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946432));
    // 0x1049b4: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x1049b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
    // 0x1049b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1049bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1049c0:
    // 0x1049c0: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x1049C0u;
    {
        const bool branch_taken_0x1049c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049C0u;
        // 0x1049c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049c0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1049C8u;
    // 0x1049c8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1049cc:
    // 0x1049cc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1049CCu;
    SET_GPR_U32(ctx, 31, 0x1049D4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1049CCu, 0x1049D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049D4u;
label_1049d4:
    // 0x1049d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1049D4u;
    {
        const bool branch_taken_0x1049d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049D4u;
        // 0x1049d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049d4) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x1049DCu;
    // 0x1049dc: 0xc04161c  jal         func_105870
    ctx->pc = 0x1049DCu;
    SET_GPR_U32(ctx, 31, 0x1049E4u);
    ctx->pc = 0x1049E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049DCu;
    // 0x1049e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105870u, 0x1049DCu, 0x1049E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049E4u;
label_1049e4:
    // 0x1049e4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049e8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1049ec: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x1049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x1049f0: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x1049f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x1049f4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1049f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1049fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a00: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x104a04: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104a08:
    // 0x104a08: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x104A08u;
    {
        const bool branch_taken_0x104a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A08u;
        // 0x104a0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a08) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104A10u;
    // 0x104a10: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104a14:
    // 0x104a14: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104A14u;
    SET_GPR_U32(ctx, 31, 0x104A1Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104A14u, 0x104A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A1Cu;
label_104a1c:
    // 0x104a1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A1Cu;
        // 0x104a20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x104A50u;
            goto label_104a50;
        }
    }
    ctx->pc = 0x104A24u;
    // 0x104a24: 0xc041570  jal         func_1055C0
    ctx->pc = 0x104A24u;
    SET_GPR_U32(ctx, 31, 0x104A2Cu);
    ctx->pc = 0x104A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A24u;
    // 0x104a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1055C0u, 0x104A24u, 0x104A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A2Cu;
label_104a2c:
    // 0x104a2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a30: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104a34: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x104a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x104a38: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x104a3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104a40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104a44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a48: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x104a4c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104a50:
    // 0x104a50: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x104A50u;
    {
        const bool branch_taken_0x104a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A50u;
        // 0x104a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a50) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104A58u;
    // 0x104a58: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104a5c:
    // 0x104a5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104A5Cu;
    SET_GPR_U32(ctx, 31, 0x104A64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104A5Cu, 0x104A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A64u;
label_104a64:
    // 0x104a64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104A64u;
    {
        const bool branch_taken_0x104a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A64u;
        // 0x104a68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a64) {
            ctx->pc = 0x104A98u;
            goto label_104a98;
        }
    }
    ctx->pc = 0x104A6Cu;
    // 0x104a6c: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104A6Cu;
    SET_GPR_U32(ctx, 31, 0x104A74u);
    ctx->pc = 0x104A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A6Cu;
    // 0x104a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104A6Cu, 0x104A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104A74u;
label_104a74:
    // 0x104a74: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104a7c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104a80: 0x2463a490  addiu       $v1, $v1, -0x5B70
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x104a84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104a88: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104a8c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104a90: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x104a94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104a98:
    // 0x104a98: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x104A98u;
    {
        const bool branch_taken_0x104a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A98u;
        // 0x104a9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a98) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104AA0u;
    // 0x104aa0: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_104aa4:
    // 0x104aa4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104AA4u;
    SET_GPR_U32(ctx, 31, 0x104AACu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104AA4u, 0x104AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AACu;
label_104aac:
    // 0x104aac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104AACu;
    {
        const bool branch_taken_0x104aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AACu;
        // 0x104ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104aac) {
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104AB4u;
    // 0x104ab4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104AB4u;
    SET_GPR_U32(ctx, 31, 0x104ABCu);
    ctx->pc = 0x104AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AB4u;
    // 0x104ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104AB4u, 0x104ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ABCu;
label_104abc:
    // 0x104abc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ac0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104ac4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104ac8: 0x2463a490  addiu       $v1, $v1, -0x5B70
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x104acc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ad0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ad4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104ad8: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x104ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x104adc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104ae0:
    // 0x104ae0: 0x100001cd  b           . + 4 + (0x1CD << 2)
    ctx->pc = 0x104AE0u;
    {
        const bool branch_taken_0x104ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AE0u;
        // 0x104ae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ae0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104AE8u;
    // 0x104ae8: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x104ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_104aec:
    // 0x104aec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104AECu;
    SET_GPR_U32(ctx, 31, 0x104AF4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104AECu, 0x104AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AF4u;
label_104af4:
    // 0x104af4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104AF4u;
    {
        const bool branch_taken_0x104af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AF4u;
        // 0x104af8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104af4) {
            ctx->pc = 0x104B10u;
            goto label_104b10;
        }
    }
    ctx->pc = 0x104AFCu;
    // 0x104afc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104AFCu;
    SET_GPR_U32(ctx, 31, 0x104B04u);
    ctx->pc = 0x104B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104AFCu;
    // 0x104b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104AFCu, 0x104B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B04u;
label_104b04:
    // 0x104b04: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b08: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x104b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x104b0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104b10:
    // 0x104b10: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x104B10u;
    {
        const bool branch_taken_0x104b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B10u;
        // 0x104b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b10) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104B18u;
    // 0x104b18: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104b1c:
    // 0x104b1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B1Cu;
    SET_GPR_U32(ctx, 31, 0x104B24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B1Cu, 0x104B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B24u;
label_104b24:
    // 0x104b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104B24u;
    {
        const bool branch_taken_0x104b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B24u;
        // 0x104b28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b24) {
            ctx->pc = 0x104B40u;
            goto label_104b40;
        }
    }
    ctx->pc = 0x104B2Cu;
    // 0x104b2c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B2Cu;
    // 0x104b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104B2Cu, 0x104B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B34u;
label_104b34:
    // 0x104b34: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b38: 0x2442ae20  addiu       $v0, $v0, -0x51E0
    ctx->pc = 0x104b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x104b3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104b40:
    // 0x104b40: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x104B40u;
    {
        const bool branch_taken_0x104b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B40u;
        // 0x104b44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b40) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104B48u;
    // 0x104b48: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104b4c:
    // 0x104b4c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B4Cu;
    SET_GPR_U32(ctx, 31, 0x104B54u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B4Cu, 0x104B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B54u;
label_104b54:
    // 0x104b54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104B54u;
    {
        const bool branch_taken_0x104b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B54u;
        // 0x104b58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b54) {
            ctx->pc = 0x104B88u;
            goto label_104b88;
        }
    }
    ctx->pc = 0x104B5Cu;
    // 0x104b5c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104B5Cu;
    SET_GPR_U32(ctx, 31, 0x104B64u);
    ctx->pc = 0x104B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B5Cu;
    // 0x104b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104B5Cu, 0x104B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B64u;
label_104b64:
    // 0x104b64: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b68: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104b6c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104b70: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104b74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104b78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104b7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104b80: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x104b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x104b84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104b88:
    // 0x104b88: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x104B88u;
    {
        const bool branch_taken_0x104b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B88u;
        // 0x104b8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b88) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104B90u;
    // 0x104b90: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104b94:
    // 0x104b94: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104B94u;
    SET_GPR_U32(ctx, 31, 0x104B9Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104B94u, 0x104B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B9Cu;
label_104b9c:
    // 0x104b9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104B9Cu;
    {
        const bool branch_taken_0x104b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B9Cu;
        // 0x104ba0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b9c) {
            ctx->pc = 0x104BC4u;
            goto label_104bc4;
        }
    }
    ctx->pc = 0x104BA4u;
    // 0x104ba4: 0xc056360  jal         func_158D80
    ctx->pc = 0x104BA4u;
    SET_GPR_U32(ctx, 31, 0x104BACu);
    ctx->pc = 0x104BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BA4u;
    // 0x104ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104BA4u, 0x104BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BACu;
label_104bac:
    // 0x104bac: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104bb0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104bb4: 0x2463ae20  addiu       $v1, $v1, -0x51E0
    ctx->pc = 0x104bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946336));
    // 0x104bb8: 0x2442ad60  addiu       $v0, $v0, -0x52A0
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946144));
    // 0x104bbc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104bc0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104bc4:
    // 0x104bc4: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x104BC4u;
    {
        const bool branch_taken_0x104bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BC4u;
        // 0x104bc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bc4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104BCCu;
    // 0x104bcc: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104bd0:
    // 0x104bd0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104BD0u;
    SET_GPR_U32(ctx, 31, 0x104BD8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104BD0u, 0x104BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BD8u;
label_104bd8:
    // 0x104bd8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104BD8u;
    {
        const bool branch_taken_0x104bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bd8) {
            ctx->pc = 0x104C0Cu;
            goto label_104c0c;
        }
    }
    ctx->pc = 0x104BE0u;
    // 0x104be0: 0xc041860  jal         func_106180
    ctx->pc = 0x104BE0u;
    SET_GPR_U32(ctx, 31, 0x104BE8u);
    ctx->pc = 0x104BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BE0u;
    // 0x104be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x104BE0u, 0x104BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BE8u;
label_104be8:
    // 0x104be8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104bec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104bf0: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x104bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x104bf4: 0x24639890  addiu       $v1, $v1, -0x6770
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940816));
    // 0x104bf8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104bfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c00: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c04: 0x24429830  addiu       $v0, $v0, -0x67D0
    ctx->pc = 0x104c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940720));
    // 0x104c08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104c0c:
    // 0x104c0c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x104C0Cu;
    {
        const bool branch_taken_0x104c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C0Cu;
        // 0x104c10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c0c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104C14u;
    // 0x104c14: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104c18:
    // 0x104c18: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104C18u;
    SET_GPR_U32(ctx, 31, 0x104C20u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104C18u, 0x104C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C20u;
label_104c20:
    // 0x104c20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C20u;
    {
        const bool branch_taken_0x104c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C20u;
        // 0x104c24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c20) {
            ctx->pc = 0x104C54u;
            goto label_104c54;
        }
    }
    ctx->pc = 0x104C28u;
    // 0x104c28: 0xc056360  jal         func_158D80
    ctx->pc = 0x104C28u;
    SET_GPR_U32(ctx, 31, 0x104C30u);
    ctx->pc = 0x104C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C28u;
    // 0x104c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104C28u, 0x104C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C30u;
label_104c30:
    // 0x104c30: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c34: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104c38: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x104c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x104c3c: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104c40: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104c44: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c4c: 0x24429fb0  addiu       $v0, $v0, -0x6050
    ctx->pc = 0x104c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942640));
    // 0x104c50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104c54:
    // 0x104c54: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x104C54u;
    {
        const bool branch_taken_0x104c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C54u;
        // 0x104c58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c54) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104C5Cu;
    // 0x104c5c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_104c60:
    // 0x104c60: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104C60u;
    SET_GPR_U32(ctx, 31, 0x104C68u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104C60u, 0x104C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C68u;
label_104c68:
    // 0x104c68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C68u;
    {
        const bool branch_taken_0x104c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C68u;
        // 0x104c6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c68) {
            ctx->pc = 0x104C9Cu;
            goto label_104c9c;
        }
    }
    ctx->pc = 0x104C70u;
    // 0x104c70: 0xc041860  jal         func_106180
    ctx->pc = 0x104C70u;
    SET_GPR_U32(ctx, 31, 0x104C78u);
    ctx->pc = 0x104C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C70u;
    // 0x104c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x104C70u, 0x104C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C78u;
label_104c78:
    // 0x104c78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c7c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104c80: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x104c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x104c84: 0x246398f0  addiu       $v1, $v1, -0x6710
    ctx->pc = 0x104c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940912));
    // 0x104c88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104c8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c90: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c94: 0x24429950  addiu       $v0, $v0, -0x66B0
    ctx->pc = 0x104c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x104c98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104c9c:
    // 0x104c9c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x104C9Cu;
    {
        const bool branch_taken_0x104c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C9Cu;
        // 0x104ca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c9c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104CA4u;
    // 0x104ca4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104ca8:
    // 0x104ca8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104CA8u;
    SET_GPR_U32(ctx, 31, 0x104CB0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104CA8u, 0x104CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CB0u;
label_104cb0:
    // 0x104cb0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104CB0u;
    {
        const bool branch_taken_0x104cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CB0u;
        // 0x104cb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cb0) {
            ctx->pc = 0x104D1Cu;
            goto label_104d1c;
        }
    }
    ctx->pc = 0x104CB8u;
    // 0x104cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cbc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104CBCu;
    SET_GPR_U32(ctx, 31, 0x104CC4u);
    ctx->pc = 0x104CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CBCu;
    // 0x104cc0: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104CBCu, 0x104CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CC4u;
label_104cc4:
    // 0x104cc4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104cc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ccc: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104cd0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104cd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104cd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x104cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x104cdc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104ce0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104ce4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ce8: 0x246379f0  addiu       $v1, $v1, 0x79F0
    ctx->pc = 0x104ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31216));
    // 0x104cec: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104cf0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x104cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104cf4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104CF4u;
    SET_GPR_U32(ctx, 31, 0x104CFCu);
    ctx->pc = 0x104CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CF4u;
    // 0x104cf8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104CF4u, 0x104CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CFCu;
label_104cfc:
    // 0x104cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104CFCu;
    {
        const bool branch_taken_0x104cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104cfc) {
            ctx->pc = 0x104D0Cu;
            goto label_104d0c;
        }
    }
    ctx->pc = 0x104D04u;
    // 0x104d04: 0xc04a630  jal         func_1298C0
    ctx->pc = 0x104D04u;
    SET_GPR_U32(ctx, 31, 0x104D0Cu);
    ctx->pc = 0x104D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D04u;
    // 0x104d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298C0u, 0x104D04u, 0x104D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D0Cu;
label_104d0c:
    // 0x104d0c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x104d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104d10: 0xac620220  sw          $v0, 0x220($v1)
    ctx->pc = 0x104d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 2));
    // 0x104d14: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x104d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104d18: 0x0  nop
    ctx->pc = 0x104d18u;
    // NOP
label_104d1c:
    // 0x104d1c: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x104D1Cu;
    {
        const bool branch_taken_0x104d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D1Cu;
        // 0x104d20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d1c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104D24u;
    // 0x104d24: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104d28:
    // 0x104d28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104D28u;
    SET_GPR_U32(ctx, 31, 0x104D30u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104D28u, 0x104D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D30u;
label_104d30:
    // 0x104d30: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104D30u;
    {
        const bool branch_taken_0x104d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D30u;
        // 0x104d34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d30) {
            ctx->pc = 0x104D9Cu;
            goto label_104d9c;
        }
    }
    ctx->pc = 0x104D38u;
    // 0x104d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d3c: 0xc056360  jal         func_158D80
    ctx->pc = 0x104D3Cu;
    SET_GPR_U32(ctx, 31, 0x104D44u);
    ctx->pc = 0x104D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D3Cu;
    // 0x104d40: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104D3Cu, 0x104D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D44u;
label_104d44:
    // 0x104d44: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104d48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104d4c: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104d50: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104d54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104d58: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x104d5c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104d60: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104d64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104d68: 0x24637990  addiu       $v1, $v1, 0x7990
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31120));
    // 0x104d6c: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104d70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d74: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104D74u;
    SET_GPR_U32(ctx, 31, 0x104D7Cu);
    ctx->pc = 0x104D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D74u;
    // 0x104d78: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104D74u, 0x104D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D7Cu;
label_104d7c:
    // 0x104d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104D7Cu;
    {
        const bool branch_taken_0x104d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104d7c) {
            ctx->pc = 0x104D8Cu;
            goto label_104d8c;
        }
    }
    ctx->pc = 0x104D84u;
    // 0x104d84: 0xc04a864  jal         func_12A190
    ctx->pc = 0x104D84u;
    SET_GPR_U32(ctx, 31, 0x104D8Cu);
    ctx->pc = 0x104D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104D84u;
    // 0x104d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A190u, 0x104D84u, 0x104D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104D8Cu;
label_104d8c:
    // 0x104d8c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d90: 0xac620220  sw          $v0, 0x220($v1)
    ctx->pc = 0x104d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 2));
    // 0x104d94: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104d98: 0x0  nop
    ctx->pc = 0x104d98u;
    // NOP
label_104d9c:
    // 0x104d9c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x104D9Cu;
    {
        const bool branch_taken_0x104d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D9Cu;
        // 0x104da0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d9c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104DA4u;
    // 0x104da4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104da8:
    // 0x104da8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104DA8u;
    SET_GPR_U32(ctx, 31, 0x104DB0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104DA8u, 0x104DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DB0u;
label_104db0:
    // 0x104db0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x104DB0u;
    {
        const bool branch_taken_0x104db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DB0u;
        // 0x104db4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104db0) {
            ctx->pc = 0x104E1Cu;
            goto label_104e1c;
        }
    }
    ctx->pc = 0x104DB8u;
    // 0x104db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc056360  jal         func_158D80
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104dc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104dcc: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104dd0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104dd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104dd8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x104ddc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104de0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104de4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104de8: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
    // 0x104dec: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104df0: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x104df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104df4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104DF4u;
    SET_GPR_U32(ctx, 31, 0x104DFCu);
    ctx->pc = 0x104DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DF4u;
    // 0x104df8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104DF4u, 0x104DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DFCu;
label_104dfc:
    // 0x104dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104DFCu;
    {
        const bool branch_taken_0x104dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104dfc) {
            ctx->pc = 0x104E0Cu;
            goto label_104e0c;
        }
    }
    ctx->pc = 0x104E04u;
    // 0x104e04: 0xc04a89c  jal         func_12A270
    ctx->pc = 0x104E04u;
    SET_GPR_U32(ctx, 31, 0x104E0Cu);
    ctx->pc = 0x104E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E04u;
    // 0x104e08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A270u, 0x104E04u, 0x104E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E0Cu;
label_104e0c:
    // 0x104e0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x104e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104e10: 0xac620220  sw          $v0, 0x220($v1)
    ctx->pc = 0x104e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 544), GPR_U32(ctx, 2));
    // 0x104e14: 0x8fb00034  lw          $s0, 0x34($sp)
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x104e18: 0x0  nop
    ctx->pc = 0x104e18u;
    // NOP
label_104e1c:
    // 0x104e1c: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x104E1Cu;
    {
        const bool branch_taken_0x104e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E1Cu;
        // 0x104e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e1c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104E24u;
    // 0x104e24: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104e28:
    // 0x104e28: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104E28u;
    SET_GPR_U32(ctx, 31, 0x104E30u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104E28u, 0x104E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E30u;
label_104e30:
    // 0x104e30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x104E30u;
    {
        const bool branch_taken_0x104e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E30u;
        // 0x104e34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e30) {
            ctx->pc = 0x104E6Cu;
            goto label_104e6c;
        }
    }
    ctx->pc = 0x104E38u;
    // 0x104e38: 0xc056360  jal         func_158D80
    ctx->pc = 0x104E38u;
    SET_GPR_U32(ctx, 31, 0x104E40u);
    ctx->pc = 0x104E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E38u;
    // 0x104e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104E38u, 0x104E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E40u;
label_104e40:
    // 0x104e40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104e44: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104e48: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x104e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x104e4c: 0x246380b0  addiu       $v1, $v1, -0x7F50
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934704));
    // 0x104e50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104e54: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104e58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x104e5c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104e60: 0x24427ff0  addiu       $v0, $v0, 0x7FF0
    ctx->pc = 0x104e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x104e64: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x104e68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104e6c:
    // 0x104e6c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x104E6Cu;
    {
        const bool branch_taken_0x104e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E6Cu;
        // 0x104e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e6c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104E74u;
    // 0x104e74: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_104e78:
    // 0x104e78: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104E78u;
    SET_GPR_U32(ctx, 31, 0x104E80u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104E78u, 0x104E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E80u;
label_104e80:
    // 0x104e80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104E80u;
    {
        const bool branch_taken_0x104e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E80u;
        // 0x104e84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e80) {
            ctx->pc = 0x104EB0u;
            goto label_104eb0;
        }
    }
    ctx->pc = 0x104E88u;
    // 0x104e88: 0xc056360  jal         func_158D80
    ctx->pc = 0x104E88u;
    SET_GPR_U32(ctx, 31, 0x104E90u);
    ctx->pc = 0x104E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E88u;
    // 0x104e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104E88u, 0x104E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E90u;
label_104e90:
    // 0x104e90: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104e94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104e98: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x104e9c: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
    // 0x104ea0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104ea4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x104ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x104ea8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104eac: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x104eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_104eb0:
    // 0x104eb0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EB0u;
        // 0x104eb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104EB8u;
    // 0x104eb8: 0x24044400  addiu       $a0, $zero, 0x4400
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17408));
label_104ebc:
    // 0x104ebc: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104EBCu;
    SET_GPR_U32(ctx, 31, 0x104EC4u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104EBCu, 0x104EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EC4u;
label_104ec4:
    // 0x104ec4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x104EC4u;
    {
        const bool branch_taken_0x104ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC4u;
        // 0x104ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec4) {
            ctx->pc = 0x104F5Cu;
            goto label_104f5c;
        }
    }
    ctx->pc = 0x104ECCu;
    // 0x104ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ed0: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104ED0u;
    SET_GPR_U32(ctx, 31, 0x104ED8u);
    ctx->pc = 0x104ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104ED0u;
    // 0x104ed4: 0xafb00038  sw          $s0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104ED0u, 0x104ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104ED8u;
label_104ed8:
    // 0x104ed8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104edc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104ee0: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104ee4: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x104ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x104ee8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104eec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104ef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104ef4: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_104ef8:
    // 0x104ef8: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104EF8u;
    SET_GPR_U32(ctx, 31, 0x104F00u);
    ctx->pc = 0x104EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EF8u;
    // 0x104efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104EF8u, 0x104F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F00u;
label_104f00:
    // 0x104f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f04: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104f08: 0x24622300  addiu       $v0, $v1, 0x2300
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8960));
    // 0x104f0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x104f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104f10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104F10u;
    {
        const bool branch_taken_0x104f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f10) {
            ctx->pc = 0x104EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ef8;
        }
    }
    ctx->pc = 0x104F18u;
    // 0x104f18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f1c: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x104f20: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x104f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x104f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f28: 0x24502340  addiu       $s0, $v0, 0x2340
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
label_104f2c:
    // 0x104f2c: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104F2Cu;
    SET_GPR_U32(ctx, 31, 0x104F34u);
    ctx->pc = 0x104F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F2Cu;
    // 0x104f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104F2Cu, 0x104F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F34u;
label_104f34:
    // 0x104f34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f38: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104f3c: 0x244443c0  addiu       $a0, $v0, 0x43C0
    ctx->pc = 0x104f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x104f40: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x104f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x104f44: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104F44u;
    {
        const bool branch_taken_0x104f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f44) {
            ctx->pc = 0x104F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104f2c;
        }
    }
    ctx->pc = 0x104F4Cu;
    // 0x104f4c: 0xc042914  jal         func_10A450
    ctx->pc = 0x104F4Cu;
    SET_GPR_U32(ctx, 31, 0x104F54u);
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x104F4Cu, 0x104F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F54u;
label_104f54:
    // 0x104f54: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x104f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f58: 0x0  nop
    ctx->pc = 0x104f58u;
    // NOP
label_104f5c:
    // 0x104f5c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x104F5Cu;
    {
        const bool branch_taken_0x104f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F5Cu;
        // 0x104f60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f5c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104F64u;
    // 0x104f64: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_104f68:
    // 0x104f68: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104F68u;
    SET_GPR_U32(ctx, 31, 0x104F70u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104F68u, 0x104F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F70u;
label_104f70:
    // 0x104f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104F70u;
    {
        const bool branch_taken_0x104f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F70u;
        // 0x104f74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f70) {
            ctx->pc = 0x104FA4u;
            goto label_104fa4;
        }
    }
    ctx->pc = 0x104F78u;
    // 0x104f78: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104F78u;
    SET_GPR_U32(ctx, 31, 0x104F80u);
    ctx->pc = 0x104F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F78u;
    // 0x104f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104F78u, 0x104F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F80u;
label_104f80:
    // 0x104f80: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f84: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104f88: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104f8c: 0x246381d0  addiu       $v1, $v1, -0x7E30
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934992));
    // 0x104f90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104f94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f98: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104f9c: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
    // 0x104fa0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_104fa4:
    // 0x104fa4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x104FA4u;
    {
        const bool branch_taken_0x104fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA4u;
        // 0x104fa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x104FACu;
    // 0x104fac: 0x24042320  addiu       $a0, $zero, 0x2320
    ctx->pc = 0x104facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8992));
label_104fb0:
    // 0x104fb0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104FB0u;
    SET_GPR_U32(ctx, 31, 0x104FB8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104FB0u, 0x104FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FB8u;
label_104fb8:
    // 0x104fb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x104FB8u;
    {
        const bool branch_taken_0x104fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FB8u;
        // 0x104fbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fb8) {
            ctx->pc = 0x105020u;
            goto label_105020;
        }
    }
    ctx->pc = 0x104FC0u;
    // 0x104fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fc4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104FC4u;
    SET_GPR_U32(ctx, 31, 0x104FCCu);
    ctx->pc = 0x104FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FC4u;
    // 0x104fc8: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104FC4u, 0x104FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FCCu;
label_104fcc:
    // 0x104fcc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104fd0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104fd4: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x104fd8: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x104fdc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104fe0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104fe4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x104fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x104fe8: 0x24500280  addiu       $s0, $v0, 0x280
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_104fec:
    // 0x104fec: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104FECu;
    SET_GPR_U32(ctx, 31, 0x104FF4u);
    ctx->pc = 0x104FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104FECu;
    // 0x104ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104FECu, 0x104FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104FF4u;
label_104ff4:
    // 0x104ff4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x104ff8: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104ffc: 0x24622300  addiu       $v0, $v1, 0x2300
    ctx->pc = 0x104ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8960));
    // 0x105000: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x105000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105004: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105004u;
    {
        const bool branch_taken_0x105004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105004) {
            ctx->pc = 0x104FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fec;
        }
    }
    ctx->pc = 0x10500Cu;
    // 0x10500c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105010: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x105014: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x105014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x105018: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x105018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x10501c: 0x0  nop
    ctx->pc = 0x10501cu;
    // NOP
label_105020:
    // 0x105020: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x105020u;
    {
        const bool branch_taken_0x105020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105020u;
        // 0x105024: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105020) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x105028u;
    // 0x105028: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x105028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_10502c:
    // 0x10502c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10502Cu;
    SET_GPR_U32(ctx, 31, 0x105034u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10502Cu, 0x105034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105034u;
label_105034:
    // 0x105034: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x105034u;
    {
        const bool branch_taken_0x105034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105034) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10503Cu;
    // 0x10503c: 0xc05e820  jal         func_17A080
    ctx->pc = 0x10503Cu;
    SET_GPR_U32(ctx, 31, 0x105044u);
    ctx->pc = 0x105040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10503Cu;
    // 0x105040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A080u, 0x10503Cu, 0x105044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105044u;
label_105044:
    // 0x105044: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x105044u;
    {
        const bool branch_taken_0x105044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105044) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10504Cu;
    // 0x10504c: 0x240402b0  addiu       $a0, $zero, 0x2B0
    ctx->pc = 0x10504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
label_105050:
    // 0x105050: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105050u;
    SET_GPR_U32(ctx, 31, 0x105058u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105050u, 0x105058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105058u;
label_105058:
    // 0x105058: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105058u;
    {
        const bool branch_taken_0x105058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105058u;
        // 0x10505c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105058) {
            ctx->pc = 0x10508Cu;
            goto label_10508c;
        }
    }
    ctx->pc = 0x105060u;
    // 0x105060: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x105060u;
    SET_GPR_U32(ctx, 31, 0x105068u);
    ctx->pc = 0x105064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105060u;
    // 0x105064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x105060u, 0x105068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105068u;
label_105068:
    // 0x105068: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10506c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x10506cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105070: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105074: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x105074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x105078: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10507c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105080: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105084: 0x24428370  addiu       $v0, $v0, -0x7C90
    ctx->pc = 0x105084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935408));
    // 0x105088: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10508c:
    // 0x10508c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x10508Cu;
    {
        const bool branch_taken_0x10508c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10508Cu;
        // 0x105090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10508c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x105094u;
    // 0x105094: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x105094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_105098:
    // 0x105098: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105098u;
    SET_GPR_U32(ctx, 31, 0x1050A0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105098u, 0x1050A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A0u;
label_1050a0:
    // 0x1050a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1050A0u;
    {
        const bool branch_taken_0x1050a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050A0u;
        // 0x1050a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050a0) {
            ctx->pc = 0x1050D4u;
            goto label_1050d4;
        }
    }
    ctx->pc = 0x1050A8u;
    // 0x1050a8: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1050A8u;
    SET_GPR_U32(ctx, 31, 0x1050B0u);
    ctx->pc = 0x1050ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050A8u;
    // 0x1050ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1050A8u, 0x1050B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050B0u;
label_1050b0:
    // 0x1050b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050b4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1050b8: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1050bc: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x1050c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1050c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1050c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050c8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1050c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1050cc: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
    // 0x1050d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1050d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1050d4:
    // 0x1050d4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1050D4u;
    {
        const bool branch_taken_0x1050d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050D4u;
        // 0x1050d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050d4) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1050DCu;
    // 0x1050dc: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x1050dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_1050e0:
    // 0x1050e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1050E0u;
    SET_GPR_U32(ctx, 31, 0x1050E8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1050E0u, 0x1050E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050E8u;
label_1050e8:
    // 0x1050e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1050E8u;
    {
        const bool branch_taken_0x1050e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E8u;
        // 0x1050ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050e8) {
            ctx->pc = 0x10511Cu;
            goto label_10511c;
        }
    }
    ctx->pc = 0x1050F0u;
    // 0x1050f0: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1050F0u;
    SET_GPR_U32(ctx, 31, 0x1050F8u);
    ctx->pc = 0x1050F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050F0u;
    // 0x1050f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1050F0u, 0x1050F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050F8u;
label_1050f8:
    // 0x1050f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1050f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1050fc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1050fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105100: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105104: 0x2463a130  addiu       $v1, $v1, -0x5ED0
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943024));
    // 0x105108: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10510c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105110: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x105114: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x105114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
    // 0x105118: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10511c:
    // 0x10511c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10511Cu;
    {
        const bool branch_taken_0x10511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10511Cu;
        // 0x105120: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10511c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x105124u;
    // 0x105124: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x105124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_105128:
    // 0x105128: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105128u;
    SET_GPR_U32(ctx, 31, 0x105130u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105128u, 0x105130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105130u;
label_105130:
    // 0x105130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105130u;
    {
        const bool branch_taken_0x105130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105130u;
        // 0x105134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105130) {
            ctx->pc = 0x10514Cu;
            goto label_10514c;
        }
    }
    ctx->pc = 0x105138u;
    // 0x105138: 0xc056360  jal         func_158D80
    ctx->pc = 0x105138u;
    SET_GPR_U32(ctx, 31, 0x105140u);
    ctx->pc = 0x10513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105138u;
    // 0x10513c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x105138u, 0x105140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105140u;
label_105140:
    // 0x105140: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105144: 0x2442a970  addiu       $v0, $v0, -0x5690
    ctx->pc = 0x105144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945136));
    // 0x105148: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10514c:
    // 0x10514c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x10514Cu;
    {
        const bool branch_taken_0x10514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10514Cu;
        // 0x105150: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10514c) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x105154u;
    // 0x105154: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x105154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_105158:
    // 0x105158: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x105158u;
    SET_GPR_U32(ctx, 31, 0x105160u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x105158u, 0x105160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105160u;
label_105160:
    // 0x105160: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x105160u;
    {
        const bool branch_taken_0x105160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105160u;
        // 0x105164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105160) {
            ctx->pc = 0x105194u;
            goto label_105194;
        }
    }
    ctx->pc = 0x105168u;
    // 0x105168: 0xc0418dc  jal         func_106370
    ctx->pc = 0x105168u;
    SET_GPR_U32(ctx, 31, 0x105170u);
    ctx->pc = 0x10516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105168u;
    // 0x10516c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x105168u, 0x105170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105170u;
label_105170:
    // 0x105170: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105174: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x105178: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10517c: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x10517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x105180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105184: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105188: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10518c: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x10518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x105190: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105194:
    // 0x105194: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x105194u;
    {
        const bool branch_taken_0x105194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105194u;
        // 0x105198: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105194) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x10519Cu;
    // 0x10519c: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x10519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1051a0:
    // 0x1051a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1051A0u;
    SET_GPR_U32(ctx, 31, 0x1051A8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1051A0u, 0x1051A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051A8u;
label_1051a8:
    // 0x1051a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1051A8u;
    {
        const bool branch_taken_0x1051a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051A8u;
        // 0x1051ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051a8) {
            ctx->pc = 0x1051D0u;
            goto label_1051d0;
        }
    }
    ctx->pc = 0x1051B0u;
    // 0x1051b0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1051B0u;
    SET_GPR_U32(ctx, 31, 0x1051B8u);
    ctx->pc = 0x1051B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051B0u;
    // 0x1051b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1051B0u, 0x1051B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051B8u;
label_1051b8:
    // 0x1051b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1051bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1051c0: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x1051c4: 0x2442a4f0  addiu       $v0, $v0, -0x5B10
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943984));
    // 0x1051c8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1051c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1051cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1051ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1051d0:
    // 0x1051d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1051D0u;
    {
        const bool branch_taken_0x1051d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051D0u;
        // 0x1051d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051d0) {
            ctx->pc = 0x105218u;
            goto label_105218;
        }
    }
    ctx->pc = 0x1051D8u;
label_1051d8:
    // 0x1051d8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1051D8u;
    SET_GPR_U32(ctx, 31, 0x1051E0u);
    ctx->pc = 0x1051DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051D8u;
    // 0x1051dc: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1051D8u, 0x1051E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051E0u;
label_1051e0:
    // 0x1051e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1051E0u;
    {
        const bool branch_taken_0x1051e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051E0u;
        // 0x1051e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e0) {
            ctx->pc = 0x105214u;
            goto label_105214;
        }
    }
    ctx->pc = 0x1051E8u;
    // 0x1051e8: 0xc056360  jal         func_158D80
    ctx->pc = 0x1051E8u;
    SET_GPR_U32(ctx, 31, 0x1051F0u);
    ctx->pc = 0x1051ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1051E8u;
    // 0x1051ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1051E8u, 0x1051F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1051F0u;
label_1051f0:
    // 0x1051f0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1051f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1051f4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1051f8: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1051f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1051fc: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x105200: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105204: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105208: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10520c: 0x24427930  addiu       $v0, $v0, 0x7930
    ctx->pc = 0x10520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31024));
    // 0x105210: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105214:
    // 0x105214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105218:
    // 0x105218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10521c:
    // 0x10521c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10521cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105220: 0x3e00008  jr          $ra
    ctx->pc = 0x105220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105220u;
        // 0x105224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105228u;
}
